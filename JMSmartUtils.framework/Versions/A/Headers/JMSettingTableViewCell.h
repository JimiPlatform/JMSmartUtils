//
//  JMSettingTableViewCell.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JMSettingItem;

NS_ASSUME_NONNULL_BEGIN

@interface JMSettingTableViewCell : UITableViewCell

@property (nonatomic,strong) JMSettingItem *item;   //基础数据模型

@property (nonatomic,assign) BOOL hiddenLastDivider;    //是否隐藏最后的分栏

@property (nonatomic,copy) void(^switchBtnBlock)(void);
@property (nonatomic,copy) void(^switchBtnWithIdBlock)(UISwitch *switchBtn);

@property (nonatomic,strong) UIView *customView;

+ (instancetype)cellWithTableView:(UITableView *)tableView item:(JMSettingItem *)item;

@end

NS_ASSUME_NONNULL_END
