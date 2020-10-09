//
//  JMSettingTextFieldItem.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/29.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMSettingItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMSettingTextFieldItem : JMSettingItem

/// 内容
@property (nonatomic,copy) NSString *text;
/// 占位文字
@property (nonatomic,copy) NSString *placeholder;
/// TextField
@property (nonatomic,strong) UITextField *detailTextField;

@end

NS_ASSUME_NONNULL_END
