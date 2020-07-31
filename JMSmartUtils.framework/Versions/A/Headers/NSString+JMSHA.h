//
//  NSString+JMSHA.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HMAC_SHA_TYPE) {
    HMAC_SHA_TYPE_1 = 1,
    HMAC_SHA_TYPE_256 = 2,
    HMAC_SHA_TYPE_512 = 3
};

@interface NSString (JMSHA)

@property (readonly) NSString *jm_sha1String;
@property (readonly) NSString *jm_sha256String;
@property (readonly) NSString *jm_sha512String;

/// SHA加密
/// @param key 加密的key
- (NSString *)jm_hmacSHAStringWithKey:(NSString *)key encryptMode:(HMAC_SHA_TYPE)encryptMode;

@end

NS_ASSUME_NONNULL_END
