//
//  SettingSwitchItem.h
//  JMSmartUtils
//
//  Created by lizhijian on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMSettingItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMSettingSwitchItem : JMSettingItem

/// SwitchBtn操作之后的响应
@property (nonatomic,copy) void(^ _Nullable switchBtnBlock)(UISwitch * _Nonnull switchBtn);
/// SwitchBtn的值
@property (nonatomic,assign) BOOL switchBtnValue;
/// SwitchBtn的使能
@property (nonatomic,assign) BOOL switchBtnEnable;
/// UISwitch开关
@property (nonatomic,strong) UISwitch * _Nullable switchBtn;

@end

NS_ASSUME_NONNULL_END
