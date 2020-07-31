//
//  JMPermissions.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/7/9.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface JMPermissions : NSObject

/// 是否有麦克风权限
+ (BOOL)jm_canRecordPermission;

/// 判断是否有摄像机权限
+ (BOOL)jm_canCameraPermission;

/// 判断是否读取系统相册的权限
+ (BOOL)jm_canPhotoPermission;

/// 判断是否具有系统通知的权限
+ (BOOL)jm_canNotificationPermission;

/// 判断是否有获取地址的权限
+ (BOOL)jm_canLocationPermission;

/// 打开系统设置
+ (BOOL)openAppSettingOfSystem;

@end

NS_ASSUME_NONNULL_END
