//
//  JMBaseSettingViewController.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <JMSmartUtils/JMSmartUtils.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMBaseSettingViewController : JMBaseViewController

@property (nonatomic,strong) NSMutableDictionary  * _Nullable dataDic;     //需要传递的数据
@property (nonatomic) id _Nullable dataObject;    //需要传递的数据
@property (nonatomic,assign) char * _Nullable pData;    //需要传递的数据（指针）

@end

NS_ASSUME_NONNULL_END
