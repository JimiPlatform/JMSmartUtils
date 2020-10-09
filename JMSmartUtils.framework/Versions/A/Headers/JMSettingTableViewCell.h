//
//  JMSettingTableViewCell.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMBaseTableViewConfig.h"
#import "JMSettingItemGroup.h"
#import "JMSettingItem.h"
#import "JMSettingCustomViewItem.h"
#import "JMSettingArrowItem.h"
#import "JMSettingSwitchItem.h"
#import "JMSettingLabelItem.h"
#import "JMSettingTextFieldItem.h"
#import "JMSettingRadioItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMSettingTableViewCell : UITableViewCell

/// 基础数据模型
@property (nonatomic,strong,readonly) JMSettingItem *item;

/// 获取一个模板类Cell视图示例
/// @param tableView UITableView对象
/// @param item JMSettingItem数据模组
/// @param config 全局颜色、字体等配置
+ (instancetype)cellWithTableView:(UITableView *)tableView item:(JMSettingItem *)item config:(JMBaseTableViewConfig *)config;

@end

NS_ASSUME_NONNULL_END
