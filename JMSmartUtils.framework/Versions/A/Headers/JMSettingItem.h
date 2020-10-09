//
//  SettingItem.h
//  JMSmartUtils
//
//  Created by lizhijian on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// Cell的item类型
typedef NS_ENUM(NSUInteger, JMSettingItemType) {
    JMSettingItemTypeNone = 0,      //不识别
    JMSettingItemTypeArrow,         //跳转类型
    JMSettingItemTypeLabel,         //标签类型
    JMSettingItemTypeSwitch,        //开关类型
    JMSettingItemTypeTextFidld,     //文本类型
    JMSettingItemTypeCustomView,    //自定义类型
    
    JMSettingItemTypeRadio = JMSettingItemTypeArrow,         //单选/复选类型
};

@class JMSettingTableViewCell;
@class JMBaseTableViewConfig;

@interface JMSettingItem : NSObject

/// item类型(设置无效)
@property (nonatomic,assign) JMSettingItemType type;

/// 标识
@property (nonatomic,assign) NSInteger tag;
/// 图标
@property (nonatomic,copy) NSString * _Nullable icon;
/// 左边主标题
@property (nonatomic,copy) NSString * _Nullable title;
/// 主标题右侧图标
@property (nonatomic,copy) NSString * _Nullable titleHintIcon;
/// 左边副标题
@property (nonatomic,copy) NSString * _Nullable subTitle;
/// 右边详情
@property (nonatomic,copy) NSString * _Nullable detailTitle;
/// 右侧箭头图标
@property (nonatomic,copy) NSString * _Nullable arrowIcon;
/// 处理点击的事件，走此block会终端默认的操作
@property (nonatomic,copy) void(^ _Nullable cellOptionBlock)(JMSettingItem * _Nullable item);

#pragma mark - 自定义区

/// 自定义arrow视图
@property (nonatomic,strong) UIView * _Nullable accessoryView;
/// 自定义Cell视图
@property (nonatomic,strong) UIView * _Nullable customView;

#pragma mark - 传递数据区
/// 需要传递的数据
@property (nonatomic,strong) NSMutableDictionary * _Nullable dataDic;
/// 需要传递的数据
@property (nonatomic,strong) id _Nullable dataObject;
/// 需要传递的数据（指针,如有申请内存请自主释放）
@property (nonatomic,assign) char * _Nullable pData;

#pragma mark -

/// 指向的下一个视图控制器类
@property (nonatomic,assign) Class _Nullable destVC;

/// 初始化一个Item模组
/// @param icon 主图片名称
/// @param title 主标题
- (instancetype _Nonnull)initWithIcon:(NSString * _Nullable)icon title:(NSString * _Nullable)title;

/// 初始化一个Item模组
/// @param icon 主图片名称
/// @param title 主标题
/// @param destVc 点击的下一个控制器类，JMSettingItemTypeArrow类型才生效
- (instancetype _Nonnull)initWithIcon:(NSString *_Nullable)icon title:(NSString *_Nullable)title destClass:(Class _Nullable )destVc;

#pragma mark - 重载差异化

/// 差异化更新数据（子item需要需要重写）
/// @param cell cell示例对象
- (void)updateDiffDataWithCell:(JMSettingTableViewCell *)cell;

/// 差异化更新子视图/布局（子item需要需要重写）
/// @param cell cell示例对象
- (void)layoutDiffSubviewWithCell:(JMSettingTableViewCell *)cell;

/// 差异化更新配置数据（子item需要需要重写）
/// @param config JMBaseTableViewConfig示例对象
- (void)updateDiffCinfigWithCell:(JMSettingTableViewCell *)cell config:(JMBaseTableViewConfig *)config;

@end

NS_ASSUME_NONNULL_END
