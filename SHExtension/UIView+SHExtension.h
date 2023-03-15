//
//  UIView+SHExtension.h
//  SHExtension
//
//  Created by CSH on 2018/9/19.
//  Copyright © 2018年 CSH. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define kSHWidth ([UIScreen mainScreen].bounds.size.width)
#define kSHHeight ([UIScreen mainScreen].bounds.size.height)

//回调 拖拽结束
typedef void (^DragBlock)(UIView *dragView);
//回调 点击
typedef void(^ClickBlock)(UITapGestureRecognizer *tap);

//阴影位置
typedef enum : NSUInteger {
    SHViewShadowType_center = 1,
    SHViewShadowType_top,
    SHViewShadowType_left,
    SHViewShadowType_bottom,
    SHViewShadowType_right,
} SHViewShadowType;

IBInspectable @interface UIView(SHExtension)

#pragma mark - frame
// X轴
@property (nonatomic, assign) CGFloat x;
// Y轴
@property (nonatomic, assign) CGFloat y;
//右边X轴
@property (nonatomic, assign, readonly) CGFloat maxX;
//右边Y轴
@property (nonatomic, assign, readonly) CGFloat maxY;
//中心点X轴
@property (nonatomic, assign) CGFloat centerX;
//中心点Y轴
@property (nonatomic, assign) CGFloat centerY;
//宽度
@property (nonatomic, assign) CGFloat width;
//高度
@property (nonatomic, assign) CGFloat height;
//位置(X、Y)
@property (nonatomic, assign) CGPoint origin;
//尺寸（width、height）
@property (nonatomic, assign) CGSize size;

//获取控制器
@property (nonatomic, strong, readonly) UIViewController *sh_vc;
//视图生成图片
@property (nonatomic, strong, readonly) UIImage *sh_img;
//复制视图
@property (nonatomic, strong, readonly) UIView *sh_copy;

//拖拽 使用下方一个就好
//设置拖拽边距
@property (nonatomic, assign) UIEdgeInsets dragEdge;
//拖拽结束回调（优先级最高）
@property (nonatomic, copy) DragBlock dragBlock;
//拖拽中回调
@property (nonatomic, copy) DragBlock dragingBlock;

//按照图片剪裁视图
@property (nonatomic, strong) UIImage *clippingImage;

//点击回调
@property (nonatomic, copy) ClickBlock clickBlock;

#pragma mark 关闭拖拽
- (void)closeDrag;

#pragma mark 描边
- (void)borderRadius:(CGFloat)radius;
- (void)borderRadius:(CGFloat)radius width:(CGFloat)width color:(UIColor *)color;
- (void)borderRadius:(CGFloat)radius corners:(UIRectCorner)corners;

#pragma mark 虚线边框
/// 虚线边框
/// @param lineColor 颜色
/// @param lineWidth 宽度
/// @param lineDashPattern @[线长、线间隔]
- (void)drawDashedBorder:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth cornerRadius:(CGFloat)cornerRadius lineDashPattern:(NSArray<NSNumber *> *)lineDashPattern;

#pragma mark 绘制虚线
/// 绘制虚线
/// @param lineColor 颜色
/// @param lineWidth 宽度
/// @param lineDashPattern @[线长、线间隔]
/// @param isHorizonal 是否水平
- (void)drawDashed:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth lineDashPattern:(NSArray<NSNumber *> *)lineDashPattern isHorizonal:(BOOL)isHorizonal;

#pragma mark 获取一个渐变色的视图(colorArr:(__bridge id)[UIColor redColor].CGColor)
+ (UIView *)getGradientViewWithSize:(CGSize)size startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint colorArr:(NSArray *)colorArr;

#pragma mark 按照图片裁剪视图
- (void)makeMaskViewWithImage:(UIImage *)image;

#pragma mark 复制
+ (id)copy_obj:(id)obj;

#pragma mark - xib 属性
//加载xib
+ (instancetype)loadXib;

// 注意: 加上IBInspectable就可以可视化显示相关的属性
//圆角弧度
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;
//边框宽度
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;
//边框颜色
@property (nonatomic, strong) IBInspectable UIColor *borderColor;
//剪切
@property (nonatomic, assign) IBInspectable BOOL masksToBounds;
//阴影相关
//阴影颜色
@property (nonatomic, strong) IBInspectable UIColor *shadowColor;
//阴影偏移
@property (nonatomic, assign) IBInspectable CGSize shadowOffset;
//阴影透明度
@property (nonatomic, assign) IBInspectable CGFloat shadowOpacity;
//阴影半径
@property (nonatomic, assign) IBInspectable CGFloat shadowRadius;
//阴影路径
@property (nonatomic, assign) IBInspectable CGPathRef shadowPath;

//阴影位置
@property (nonatomic, assign) IBInspectable SHViewShadowType shadowType;

@end

NS_ASSUME_NONNULL_END
