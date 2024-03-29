//
//  SHUncaughtExceptionHandler.h
//  SHExtensionExample
//
//  Created by CCSH on 2022/1/12.
//  Copyright © 2022 CSH. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 异常捕获处理
@interface SHUncaughtExceptionHandler : NSObject

/// 异常的处理方法
/// @param install 是否开启捕获异常
/// @param showAlert 是否在发生异常时弹出alertView
+ (void)installUncaughtExceptionHandler:(BOOL)install showAlert:(BOOL)showAlert;

@end

NS_ASSUME_NONNULL_END
