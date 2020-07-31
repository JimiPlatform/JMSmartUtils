//
//  JMExt.h
//  JMSmartUtils
//
//  Created by lizhijian on 2017/7/19.
//  Copyright © 2017年 Concox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (JMExt)

/**
 获取当前显示的控制器

 @return UIViewController
 */
+ (UIViewController *_Nullable)jm_currentViewController;

/**
 退出所有控制器，直到与window.rootViewController或destVc相等为止

 @param destVc 目标控制器类
 */
+ (void)exitViewController:(Class _Nonnull)destVc;


/**
 推出所有控制器直到toVc

 @param currentVc 当前控制器
 @param toVc 目标控制器类
 */
+ (void)exitViewController:(UIViewController * _Nullable)currentVc toVC:(Class _Nonnull)toVc;

@end
