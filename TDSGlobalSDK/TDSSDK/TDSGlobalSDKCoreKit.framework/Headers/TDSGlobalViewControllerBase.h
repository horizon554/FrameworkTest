//
//  TDSGlobalViewControllerBase.h
//  XDG
//
//  Created by JiangJiahao on 2020/8/19.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//  界面基类

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalViewControllerBase : UIViewController

@property (nonatomic) UIView *containerView;

// 内容宽度
- (CGFloat)getContainerWidth;
// 内容高度
- (CGFloat)getContainerHeight;

// 在containerView上布局
- (void)layoutContainerView;

#pragma mark - 弹窗提示(当前页面)
- (NSTimeInterval)autoHudDuration;
- (NSTimeInterval)hudGraceTime;
// 自动消失
- (void)showAutoHud:(NSString *)text;
- (void)showAutoHud:(NSString *)text completion:(nullable void (^)(void))completion;
- (void)showHud:(NSString *)text;
- (void)hideHud;

- (void)showLoading;
- (void)showLoading:(nullable NSString *)text;
- (void)showLoading:(nullable NSString *)text graceTime:(NSTimeInterval)graceTime;
- (void)showLoadingWithView:(nullable UIView *)customView;
- (void)showLoadingWithView:(nullable UIView *)customView graceTime:(NSTimeInterval)graceTime;

- (void)removeLoading;

#pragma mark - 带图案加载中
- (void)removeLoadingInfo;
- (void)loadInfoFail:(UIView *)targetView tapAction:(void (^)(void))action;
- (void)loadInfoFail:(UIView *)targetView networkFail:(BOOL)networkFail tapAction:(void (^)(void))action;
#pragma mark - 界面Push pop
- (void)push:(UIViewController *)controller;
- (void)goBack:(id)sender;

- (void)dismiss;
- (void)dismiss:(BOOL)animate completion:(void (^ __nullable)(void))completion;
@end

NS_ASSUME_NONNULL_END
