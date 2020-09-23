//
//  SettingSubArrowItem.h
//  JimiLive
//
//  Created by lizhijian on 16/5/20.
//  Copyright © 2016年 Concox. All rights reserved.
//

#import "JMSettingItem.h"

@interface JMSettingSubArrowItem : JMSettingItem

@property (nonatomic,assign) Class destVC;

- (instancetype)initWithIcon:(NSString *)icon title:(NSString *)title destClass:(Class)destVc;

@end
