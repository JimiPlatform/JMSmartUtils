//
//  SettingItem.h
//  Light
//
//  Created by lizhijian on 15/7/17.
//  Copyright (c) 2015年 Concox. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^optionBlock)(void);

@interface JMSettingItem : NSObject

@property (nonatomic,assign) NSInteger tag;

//图标
@property (nonatomic,copy) NSString * _Nullable icon;
//标题
@property (nonatomic,copy) NSString * _Nullable title;
//右边标题
@property (nonatomic,copy) NSString * _Nullable subTitle;
//当subTitle无值时，作为右边标题
@property (nonatomic,copy) NSString * _Nullable detailTitle;
@property (nonatomic,copy) NSString * _Nullable arrowIcon;
@property (nonatomic,copy) NSString * _Nullable titleAfterIcon;
//定义block保存将来要执行的代码
@property (nonatomic,copy) optionBlock _Nullable option;
@property (nonatomic,copy) void(^ _Nullable switchBtnBlock)(void);
@property (nonatomic,copy) void(^ _Nullable switchBtnWithIdBlock)(UISwitch * _Nonnull switchBtn);
@property (nonatomic,assign) BOOL switchBtnValue;
@property (nonatomic,assign) BOOL switchBtnEnble;   //使能
//自定义Arrow图
@property (nonatomic,strong) UIView * _Nullable customArrowView;

@property (nonatomic,strong) NSMutableDictionary * _Nullable dataDic;     //需要传递的数据
@property (nonatomic,strong) id _Nullable dataObject;    //需要传递的数据
@property (nonatomic,assign) char * _Nullable pData;    //需要传递的数据（指针,如有申请内存请自主释放）
@property (nonatomic,assign) NSInteger flag; //需要传递标识

- (instancetype _Nonnull )initWithIcon:(NSString *_Nullable)icon title:(NSString *_Nullable)title;

@end
