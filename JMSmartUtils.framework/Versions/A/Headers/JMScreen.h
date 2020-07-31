//
//  JMSystem.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/8/5.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JMSingleton.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JMScreenSizeType) {
    JMScreenSizeType4S = 0,    //320*480
    JMScreenSizeType5S,        //320*568
    JMScreenSizeType8,         //375*667
    JMScreenSizeType8P,        //414*736
    JMScreenSizeTypeX,         //375*812
    JMScreenSizeTypeXr,        //414*896
    JMScreenSizeTypeXsMax = JMScreenSizeTypeXr,     //414*896
};

extern CGRect JMScreenFrame(void);
extern CGFloat JMScreenHeight(void);
extern CGFloat JMScreenWidth(void);
extern CGFloat JMStatusBarHeight(void);
extern CGFloat JMNavBarHeight(void);
extern JMScreenSizeType JMscreenSizeType(void);
extern CGFloat JMSysVersion(void);
extern BOOL JMIsIPad(void);
extern CGFloat JMScale(void);

@interface JMScreen : NSObject
singleton_h();

@property (nonatomic, assign, readonly) CGRect screenFrame;
@property (nonatomic, assign, readonly) CGFloat screenHeight;
@property (nonatomic, assign, readonly) CGFloat screenWidth;
@property (nonatomic, assign, readonly) CGFloat statusBarHeight;
@property (nonatomic, assign, readonly) CGFloat navBarHeight;

@property (nonatomic, assign, readonly) JMScreenSizeType screenSizeType;
@property (nonatomic, assign, readonly) BOOL isIPad;

#pragma mark -

+ (CGRect)screenFrame;

+ (CGFloat)height;

+ (CGFloat)width;

+ (CGFloat)statusBarHeight;

+ (CGFloat)navBarHeight;

+ (JMScreenSizeType)screenSizeType;

+ (BOOL)isIPad;

#pragma mark -



@end

NS_ASSUME_NONNULL_END
