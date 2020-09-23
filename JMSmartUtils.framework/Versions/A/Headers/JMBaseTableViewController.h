//
//  JMBaseTableViewController.h
//  JMSmartUtils
//
//  Created by 李治健 on 2020/9/22.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMSettingTableViewCell.h"
#import "JMSettingSwitchItem.h"
#import "JMSettingArrowItem.h"
#import "JMSettingItemGroup.h"
#import "JMSettingLabelItem.h"
#import "JMSettingCenterLableItem.h"
#import "JMSettingSubArrowItem.h"
#import "JMSettingSubSwitchItem.h"
#import "JMSettingCustomViewItem.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^JMBaseViewCtlReturnBeforeCompletion)(void);
typedef void (^JMBaseViewCtlReturnAfterCompletion)(void);

@interface JMBaseTableViewController : UITableViewController

@property (nonatomic,assign) BOOL isLeftSidesliEnable;    //是否开启左侧边栏右滑返回，默认开启
@property (nonatomic,strong) UIViewController * _Nullable nextViewController;

//系统导航栏
@property (nonatomic,assign) BOOL isHideNavBar;     //是否隐藏导航栏
@property (nonatomic,strong) UIColor *barTintColor;     //导航栏背景颜色
@property (nonatomic,strong) UIColor *barTitleColor;    //导航栏标题颜色，首次需要设置
@property (nonatomic,strong) UIFont *barTitleFont;  //导航栏标题字体，首次需要设置

//导航栏按钮
@property (nonatomic,strong) UIButton * _Nullable navRightBtn;
@property (nonatomic,strong) UIButton * _Nullable navLeftBtn;
@property (nonatomic,copy) JMBaseViewCtlReturnBeforeCompletion _Nullable returnBeforeBlock;      //返回之前需要执行的Block
@property (nonatomic,copy) JMBaseViewCtlReturnAfterCompletion _Nullable returnAfterBlock;        //返回之后需要执行的Block(模态有效)

//自定义导航栏
@property (nonatomic,assign) BOOL isShowNavBarView;     //是否显示自定义导航栏视图，当isHideNavBar为YES时生效
@property (nonatomic,assign) BOOL isShowNavBarBgView;    //是否显示自定义导航栏背景视图；
@property (nonatomic,strong) UIView *navBarBgView;          //自定义导航栏背景视图
@property (nonatomic,strong) UILabel *navBarTitleLB;        //自定义导航栏的主题标签

#pragma mark - TableView

@property (nonatomic,strong) NSMutableArray * _Nullable datas;      //TableView数据源
@property (nonatomic,strong) NSMutableDictionary * _Nullable dataDic;     //需要传递的数据

@end

NS_ASSUME_NONNULL_END
