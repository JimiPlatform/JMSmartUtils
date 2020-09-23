//
//  AlarmAreaModel.h
//  Tycam
//
//  Created by 胡清雨 on 2018/9/18.
//  Copyright © 2018年 Concox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JMAlarmAreaModel : NSObject

@property (nonatomic, assign) CGPoint topLeftPoint;
@property (nonatomic, assign) CGPoint bottomRightPoint;
@property (nonatomic, assign) NSInteger tag;

@end
