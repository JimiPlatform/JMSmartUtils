//
//  SettingLabelItem.h
//  JMSmartUtils
//
//  Created by lizhijian on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMSettingItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMSettingLabelItem : JMSettingItem

/// 是否是中心模式
@property (nonatomic,assign) BOOL isCenterModel;
/// 中心主标题字体
@property (nonatomic,strong) UIColor *centerTitleColor;
/// 中心主标题字体
@property (nonatomic,strong) UIFont *centerTitleFont;

@end

NS_ASSUME_NONNULL_END
