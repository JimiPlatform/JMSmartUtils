//
//  SettingItemGroup.h
//  Light
//
//  Created by lizhijian on 15/7/17.
//  Copyright (c) 2015年 Concox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMSettingItemGroup : NSObject

@property (nonatomic,assign) NSInteger tag;

//头部标题
@property (nonatomic,copy) NSString *headerTitle;
//底部标题
@property (nonatomic,copy) NSString *footerTitle;
//当前分组中所有行的数据（保存的是SettingItem模型）
@property (nonatomic,strong) NSArray *items;

@end
