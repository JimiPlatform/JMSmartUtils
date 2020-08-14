//
//  JMSystem.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#ifndef UUID_MAX_LENGTH
#define UUID_MAX_LENGTH 64
#endif

@interface JMSystem : NSObject

/// 系统的版本号
+ (NSString *)jm_systemVersion;

/// 获取手机硬盘空闲空间, 返回的是字节数
+ (CGFloat)jm_freeDiskSpaceBytes;

///获取手机硬盘总空间, 返回的是字节数
+ (CGFloat)jm_totalDiskSpaceBytes;

/// 获取系统UUID
+ (NSString *)getUUID;

/// 获取指定长度的UUID
/// @param length UUID长度，最大32位
+ (NSString *)getUUID:(NSInteger)length;

/// 移除UUID记录
+ (void)removeUUID;

@end

NS_ASSUME_NONNULL_END
