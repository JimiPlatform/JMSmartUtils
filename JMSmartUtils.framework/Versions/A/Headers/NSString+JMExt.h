//
//  NSString+JMExt.h
//  TestEngineDemo
//
//  Created by lzj<lizhijian_21@163.com> on 2019/11/18.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JMExt)

#pragma mark -

/// 计算字符串所占尺寸
/// @param font 字体
/// @param maxSize 最大尺寸
- (CGSize)jm_sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

/// 判断字符串是否含有Emoji表情
/// @param string 需判断的字符串
+ (BOOL)jm_stringContainsEmoji:(NSString *)string;

/// 编码：将字符串转化成UTF-8（主要用作emoji表情编码）
- (NSString *)jm_emojiStrToUTF8;

/// 解码：将带emoji字符串UTF-8编码转化为正常字符串
- (NSString *)jm_utf8StrToEmojiStr;

/// 给文字添加颜色
/// @param strTemp 要处理的完整字符串
/// @param color1 正常色
/// @param color2 特别色
/// @param specialStrings 要添加颜色的字符串数组（必须为strTemp中的字符串）
/// @param lineSpace 行高
/// @param fontSize 字体大小
/// @param alignment 字符对齐方式
+ (NSMutableAttributedString *)jm_formatString:(NSString *)strTemp
                                         color:(UIColor *)color1
                                  specialColor:(UIColor *)color2
                                specialStrings:(NSArray *)specialStrings
                                   lineSpacing:(CGFloat)lineSpace
                                      fontSize:(CGFloat)fontSize
                                     alignment:(NSTextAlignment)alignment;

/// 去掉字符串中首尾的空格
/// @param string 需处理的字符串
+ (NSString *)jm_removeStringWithBlank:(NSString *)string;

/// 根据左边和右边的字符串，截取中间特定字符串
/// @param strLeft 左边匹配字符串
/// @param strRight 右边匹配的字符串
- (NSString*)jm_substringWithinBoundsLeft:(NSString*)strLeft right:(NSString*)strRight;

 /// 阿拉伯数字转成中文 1，一
 /// @param arebic 阿拉伯数字
 /// @return 返回的中文数字
//+(NSString *)jm_translation:(NSString *)arebic;

/// 获得汉字的拼音
/// @param chinese 需要转换的文字
//+ (NSString *)jm_ransform:(NSString *)chinese;

/// 随机获取字符串
/// @param count 生成字符串的长度
+ (NSString *)jm_getRandomString:(NSInteger)count;

#pragma mark - 数据、字符串互转

/// 数据转为字符串
/// @param bytes 数据
/// @param length 长度
- (NSString *)stringFromBytes:(unsigned char *)bytes length:(NSUInteger)length;

//NSData转成16进制字符串
+ (NSString*)stringWithHexBytes2:(NSData *)data;

/// NSData 转为 字符串
/// @param data 要转的data
+ (NSString *)jm_dataToHexString: (NSData *)data;

/// 将16进制字符串转为NSData
/// @param string 要转的字符串
+ (NSData *)jm_dataFromHexString:(NSString *)string;

/// 将字符串转为NSData
/// @param str 要转的字符串
+ (NSData *)jm_scanDataString :(NSString *) str;

/// 在字符串扫描第一段数字再转为NSNumber
/// @param str 要转的string
//+ (NSNumber *)jm_scanHexStringToNumber :(NSString *) str;

/** 二进制NSData转换为16进制 */
- (NSString *)jm_convertDataToHexStr:(NSData *)data;

#pragma mark - 判断

/// 判断字符串是否为空字符串
- (BOOL)jm_isEmpty;

///  验证字符串是否为合法邮箱
/// @param email 字符串
+ (BOOL)jm_isValidEmail:(NSString *)email;

/// 验证字符串是否为英文字符串
/// @param string 需判断的字符串
+ (BOOL)jm_isValidChar:(NSString *)string;

/// 验证字符串是否是有效手机号码
/// @param phone 需判断的手机号
+ (BOOL)jm_isPhone:(NSString *)phone;

/// 判断是否为有效长度的手机号
/// @param phone 需判断的手机号
+ (BOOL)jm_isPhone_11:(NSString *)phone;

/// 字符串里是否包含中文
/// @param str 需判断的字符串
+ (BOOL)jm_isContainChinese:(NSString *)str;

/// 是否包含数字
/// @param str 需判断的字符串
+ (BOOL)jm_isContainNumText:(NSString *)str;


/// 转Json对象
- (id)jm_toJson;

@end

NS_ASSUME_NONNULL_END
