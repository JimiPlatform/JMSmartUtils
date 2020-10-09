//
//  JMBaseSettingViewController.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMBaseViewController.h"
#import "JMBaseTableViewConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMBaseSettingViewController : JMBaseViewController

/// 表单全局配置参数
@property (nonatomic,strong) JMBaseTableViewConfig *tableViewConfig;
/// 需要传递的数据（字典）
@property (nonatomic,strong) NSMutableDictionary  * _Nullable dataDic;
/// 需要传递的数据（对象）
@property (nonatomic) id _Nullable dataObject;
/// 需要传递的数据（指针）
@property (nonatomic,assign) char * _Nullable pData;

@end

NS_ASSUME_NONNULL_END
