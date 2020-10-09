//
//  SettingItemGroup.h
//  JMSmartUtils
//
//  Created by lizhijian on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JMSettingItem;

@interface JMSettingItemGroup : NSMutableArray

/// 标识
@property (nonatomic,assign) NSInteger tag;
/// 头部标题
@property (nonatomic,copy) NSString *headerTitle;
/// 底部标题
@property (nonatomic,copy) NSString *footerTitle;
/// 当前分组中所有行的数据（保存的是SettingItem模型）
@property (nonatomic,strong) NSArray<JMSettingItem *> *items;

@end

NS_ASSUME_NONNULL_END
