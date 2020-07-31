//
//  NSString+JMRSA.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/7/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JMRSA)

/// RSA 加密
/// @param str 需要加密的文字
/// @param pubKey 公钥
+ (NSString *)jm_encryptString:(NSString *)str publicKey:(NSString *)pubKey;

/// RSA 加密
/// @param data 需要加密的数据
/// @param pubKey 公钥
+ (NSData *)jm_encryptData:(NSData *)data publicKey:(NSString *)pubKey;

/// RSA 加密
/// @param str 需要加密的文字
/// @param privKey 私钥
+ (NSString *)jm_encryptString:(NSString *)str privateKey:(NSString *)privKey;

/// RSA 加密
/// @param data 需要加密的数据
/// @param privKey 私钥
+ (NSData *)jm_encryptData:(NSData *)data privateKey:(NSString *)privKey;

/// RSA 解密
/// @param str 需要解密的文字
/// @param pubKey 公钥
+ (NSString *)jm_decryptString:(NSString *)str publicKey:(NSString *)pubKey;

/// RSA 解密
/// @param data 需要解密的数据
/// @param pubKey 公钥
+ (NSData *)jm_decryptData:(NSData *)data publicKey:(NSString *)pubKey;

/// RSA 解密
/// @param str 需要解密的文字
/// @param privKey 私钥
+ (NSString *)jm_decryptString:(NSString *)str privateKey:(NSString *)privKey;

/// RSA 解密
/// @param data 需要解密的文字
/// @param privKey 私钥
+ (NSData *)jm_decryptData:(NSData *)data privateKey:(NSString *)privKey;

@end

NS_ASSUME_NONNULL_END
