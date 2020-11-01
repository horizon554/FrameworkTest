//
//  TDSGlobalPopWindowManager.h
//  XDG
//
//  Created by JiangJiahao on 2020/8/19.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalPopWindowManager : NSObject

// 弹窗界面
+ (void)show:(UIViewController *)targetController;
// 全屏界面,浏览器等
+ (void)showFullScreenController:(UIViewController *)targetController;
+ (void)showFullScreenController:(UIViewController *)targetController animate:(BOOL)animate;

+ (void)dismiss;
+ (void)dismiss:(BOOL)animate;

/// 全局提示
/// @param msg 提示内容
+ (void)showHud:(NSString *)msg;
+ (void)showAutoHud:(NSString *)text;

/// 全局加载中
+ (void)showLoading;
+ (void)removeLoading;
@end

NS_ASSUME_NONNULL_END
