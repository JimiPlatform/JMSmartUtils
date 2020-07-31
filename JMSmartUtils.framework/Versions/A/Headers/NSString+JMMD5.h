//
//  NSString+JMMD5.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/7/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JMMD5)

@property (readonly) NSString *jm_md5String;

@property (readonly) NSString *jm_md5For16String;

@end

NS_ASSUME_NONNULL_END
