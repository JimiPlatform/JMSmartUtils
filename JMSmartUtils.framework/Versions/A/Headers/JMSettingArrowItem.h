//
//  SettingArrowItem.h
//  Light
//
//  Created by lizhijian on 15/7/17.
//  Copyright (c) 2015年 Concox. All rights reserved.
//


#import "JMSettingItem.h"

@interface JMSettingArrowItem : JMSettingItem

//指向的下一个视图控制器类
@property (nonatomic,assign) Class destVC;

- (instancetype)initWithIcon:(NSString *)icon title:(NSString *)title destClass:(Class)destVc;

@end
