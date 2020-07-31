//
//  JMJSONParse.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/7/9.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMJSONParse : NSObject

/// 对象转 json 串
/// @param object 需要转的对象
- (NSString *)jm_toJsonString:(id)object;

/// json 字符串转对象
/// @param jsonStr 需要转的 json 字符串
- (id)jm_toJson:(NSString *)jsonStr;

@end

NS_ASSUME_NONNULL_END
