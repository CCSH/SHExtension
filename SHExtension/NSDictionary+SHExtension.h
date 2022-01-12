//
//  NSDictionary+SHExtension.h
//  JfjbPla-IOS
//
//  Created by 陈胜辉 on 2022/1/12.
//  Copyright © 2022 zuowuping. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (SHExtension)

- (id)safe_objectForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
