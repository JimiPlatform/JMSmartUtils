//
//  NSFileManager+JMExt.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/12/28.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSFileManager (JMExt)

#pragma mark -

/// 获取沙盒文档文件夹路径
+ (NSString *)jm_documentsPath;

/// 获取沙盒文档文件夹下文件/文件夹的路径
/// @param fileName 文件/文件名称
/// @param isCreate 检测到不存在时是否创建，YES：创建
+ (NSString *)jm_documentsPath:(NSString *)fileName isCreate:(BOOL)isCreate;

/// 获取沙盒缓存文件夹路径
+ (NSString *)jm_cachesPath;

/// 获取沙盒缓存文件夹下文件/文件夹的路径
/// @param fileName 文件/文件夹名称
/// @param isCreate 检测到不存在时是否创建，YES：创建
+ (NSString *)jm_cachesPath:(NSString *)fileName isCreate:(BOOL)isCreate;

/// 检查文件是否存在
/// @param filePath 文件路径
+ (BOOL)jm_isExist:(NSString *)filePath;

///  检查文件目录是否存在
/// @param dirName 目录
+ (BOOL)jm_isExistDirectory:(NSString *)dirName;

/// 获取路径下所有的文件列表
/// @param path 路径
+ (NSArray<NSString *> *)jm_fileLists:(NSString *)path;

/// 新建文件
/// @param path 文件路径
/// @param data 需要写入数据，没有传nil
+ (BOOL)jm_create:(NSString *)path data:(nullable NSData *)data;

/// 新建文件夹
/// @param path 文件夹路径
+ (BOOL)jm_createDirectory:(NSString *)path;

/// 删除文件
/// @param path 路径
+ (BOOL)jm_delete:(NSString *)path;

/// 移动文件
/// @param path 原文件路径
/// @param toPath 新文件路径
+ (BOOL)jm_move:(NSString *)path toPath:(NSString *)toPath;

/// 往文件中写入数据
/// @param path 文件路径
/// @param data 待写入数据
/// @param isAppend 是否是追加
+ (BOOL)jm_write:(NSString *)path data:(NSData *)data isAppend:(Boolean)isAppend;

/// 拷贝文件
/// @param path 原文件路径
/// @param toPath 新文件路径
+ (BOOL)jm_copy:(NSString *)path toPath:(NSString *)toPath;

/// 查找文件/文件夹
/// @param path （查找范围）文件夹路径
/// @param fileName 文件名称
/// @param isTraversing 是否遍历，YES:依次遍历文件夹下所以文件与文件夹
+ (NSString *)jm_find:(NSString *)path fileName:(NSString *)fileName isTraversing:(BOOL)isTraversing;

/// 根据文件路径获取数据
/// @param path 文件路径
+ (NSData *)jm_getFileData:(NSString *)path;

/// 重命名文件
/// @param filePath 旧文件路径
/// @param newFileName 新文件名
+ (NSString *)jm_failRename:(NSString *)filePath newFileName:(NSString *)newFileName;

/** 获取一个文件夹以及文件夹下所有文件的大小，返回值得单位是byte */
+ (unsigned long long)jm_getSize: (NSString *)path;

/** 获取手机总容量(GB)（除去iOS系统所占容量） */
+ (float)getTotalDiskSize;

/** 获取可用容量(GB) */
+ (float)getAvailableDiskSize;

/** 获取所给路径下文件或文件夹的总大小(Kb)
 */
+ (float)getFileSize:(NSArray *)paths;

/// 判断当前缓存是否大于给定数值(以Kb为单位)
/// @param bytes 临界值
/// @param paths 需要计算大小的文件/文件夹路径数组
+ (BOOL)ifMoreThan:(unsigned long long)bytes  paths:(NSArray *)paths;

typedef void(^ClearCacheFinished)(BOOL finished);
/// 清除缓存
/// @param clearcache 清除结果回调
/// @param filepPath 需要清楚的文件/文件夹
+ (void)ClearCaches:(ClearCacheFinished)clearcache filepPath:(NSString *)filepPath;

@end

NS_ASSUME_NONNULL_END
