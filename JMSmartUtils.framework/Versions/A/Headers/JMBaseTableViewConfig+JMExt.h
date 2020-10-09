//
//  JMBaseTableViewConfig+JMExt.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/23.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMBaseTableViewConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface JMBaseTableViewConfig (JMExt)

/// 缓存Cell行高
@property (nonatomic,assign) CGFloat rowCacheHeight;
/// 缓存footer的高度
@property (nonatomic,assign) CGFloat footerCacheHeight;

@end

NS_ASSUME_NONNULL_END
