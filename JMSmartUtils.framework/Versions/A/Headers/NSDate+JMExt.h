//
//  NSDate+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//外部全局变量

/// 日期格式为 @"yyyy-MM-dd HH:mm:ss"
extern NSString *NSDate_Format_DateAndTime(void);

/// 日期格式为 @"yyyyMMddHHmmss"
extern NSString *NSDate_Format_DateAndTime2(void);

/// 日期格式为 @"yyyy-MM-dd"
extern NSString *NSDate_Format_Date(void);

/// 日期格式为 @"dd-MM-yyyy"
extern NSString *NSDate_Format_Day_Month_Year(void);

/// 日期格式为 @"yyyyMMdd"
extern NSString *NSDate_Format_Date_YearMonthDay(void);

/// 日期格式为 @"yyyy"
extern NSString *NSDate_Format_Year(void);

/// 日期格式为 @"MM"
extern NSString *NSDate_Format_Month(void);

/// 日期格式为 @"dd"
extern NSString *NSDate_Format_Day(void);

/// 日期格式为 @"HH"
extern NSString *NSDate_Format_Hour(void);

/// 日期格式为 @"mm"
extern NSString *NSDate_Format_Min(void);

/// 日期格式为 @"ss"
extern NSString *NSDate_Format_Sec(void);


@interface NSDate (JMExt)

/// 按照日期格式获取日期字符串
/// @param dateFormatStr 时间格式字符串，如，‘MM-dd’
- (NSString *)jm_toString:(NSString *)dateFormatStr;

/// 返回具体单位时间
/// @param dateFormatStr 具体时间格式
- (NSInteger)jm_getDate:(NSString *)dateFormatStr;

///  将0时区Date转换成当前时区的Date
- (NSDate *)jm_getlocalDate;

/// 将本地时区时间转换成0时区的时间
- (NSDate *)jm_getDateForUTC;

/// 获取当月的天数
- (NSUInteger)jm_getNumberOfDaysInMonth;

/// 获取本地时区与0时区的时差时间
- (NSInteger)jm_getTimeIntervalFromGMT;

/// 获取某天零点时间
- (NSDate *)jm_getDayZeroHourOfDate;

/// 是否为闰年
- (BOOL)jm_isLeapYear;

/// 获取当前时区的时间
+ (NSDate *)jm_localDate;

/// 获取当前UTC的时间
+ (NSDate *)jm_utcDate;

///  将时间转换为UTC时间
/// @param time 要转的时间，单位秒
+ (NSTimeInterval)jm_getTimeForUTC:(NSTimeInterval)time;

/// 将时间转换为当期时区时间
/// @param time 要转的时间，单位秒
+ (NSTimeInterval)jm_getLocalTime:(NSTimeInterval)time;

/// 将时间拆分成具体单位并存入字典
- (NSDictionary *)jm_getTimeDic;

/// 将某一时间，单位秒，转为日期拆分成具体的时间单位，存入字典
/// @param time 要转的时间，单位秒
+ (NSDictionary *)jm_getTimeDic:(NSTimeInterval)time;


@end

NS_ASSUME_NONNULL_END
