//
//  UIView+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JMExt)

/// View添加单机手势
/// @param tapAction 手势回调
- (void)jm_addClickedBlock:(void(^)(id obj))tapAction;

/// View 添加双击手势
/// @param tapAction 手势回调
- (void)jm_addDoubleTapBlock:(void(^)(id obj))tapAction;

/// View 添加多次点击手势
/// @param tapTimes 点击次数
/// @param tapAction 手势回调
- (void)jm_addManyTimesWithTapTimes:(NSInteger)tapTimes TapBlock:(void(^)(id obj))tapAction;

/// View 长按手势
/// @param longPressAction 手势回调
- (void)jm_addlongPressActionBlock:(void(^)(id obj))longPressAction;

/// 画虚直线
/// @param sPoint 起始点
/// @param ePoint 终点
/// @param color 虚线颜色
/// @param w 一个虚线的宽
/// @param s 虚线间的空隙大小
- (void)jm_drawDashLineWithStartPoint:(CGPoint)sPoint endPoint:(CGPoint)ePoint color:(UIColor *)color w:(CGFloat)w s:(CGFloat)s;

/// 画圆角
/// @param cornerRadii 圆角大小
/// @param frame 视图frame
- (void)drawRadiuWithView:(UIView *)view cornerRadii:(CGSize)cornerRadii frame:(CGRect)frame;

/// 给视图画虚线边框
/// @param borderWidth 线宽
/// @param cornerRadii 边框角度
/// @param view 要操作视频
/// @param w 一格虚线的宽
/// @param s 虚线的间距
/// @param strokeColor 线的颜色
- (void)drawBorderWithborderWidth:(CGFloat)borderWidth cornerRadii:(CGSize)cornerRadii view:(UIView *)view w:(CGFloat)w s:(CGFloat)s strokeColor:(UIColor *)strokeColor;

/// 给视图画实线边框
/// @param borderWidth 线宽
/// @param cornerRadii 边框角度
/// @param strokeColor 边框的颜色
- (void)drawBorderWithBorderWidth:(CGFloat)borderWidth view:(UIView *)view cornerRadii:(CGSize)cornerRadii rectCorner:(UIRectCorner)rectCorner strokeColor:(UIColor *)strokeColor;

/// 给视图添加部分圆角
/// @param rectCorner 要画画的圆角，枚举
/// @param view 要操作的视图
- (void)drawPartRadiu:(UIRectCorner)rectCorner view:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
