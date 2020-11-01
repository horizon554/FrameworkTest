//
//  TDSInputAlertView.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/23.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//  带输入框的提示

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AlertInputLeftCallback)(void);
typedef void(^AlertInputRightCallback)(void);

@interface TDSGlobalInputCheckAlertView : UIView
@property (nonatomic) AlertInputLeftCallback rightCallback;
@property (nonatomic) AlertInputRightCallback leftCallback;
// 点击背景取消，默认否
@property (nonatomic) BOOL touchBgDismiss;

// 需要检查的字符串
@property (nonatomic) NSString *targetCheckString;

+ (TDSGlobalInputCheckAlertView *)createAlertInputView:(NSString *)title
                                content:(NSString *)content
                            confirmText:(NSString *)confirmText
                             cancelText:(NSString *)cancelText;
+ (TDSGlobalInputCheckAlertView *)createAlertInputView:(NSString *)title
                          content:(NSString *)content;

- (void)showInView:(UIView *)targetView;
- (void)dismiss;
@end

NS_ASSUME_NONNULL_END
