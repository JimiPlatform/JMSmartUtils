//
//  SettingCenterLableItem.h
//  JimiLive
//
//  Created by lizhijian on 16/5/19.
//  Copyright © 2016年 Concox. All rights reserved.
//

#import "JMSettingItem.h"

@interface JMSettingCenterLableItem : JMSettingItem

//指向的下一个视图控制器类
@property (nonatomic,assign) Class destVC;
@property (nonatomic,assign) NSInteger titleColor;
@property (nonatomic,assign) NSInteger backgroungColor;

- (instancetype)initWithIcon:(NSString *)icon title:(NSString *)title destClass:(Class)destVc;

@end
