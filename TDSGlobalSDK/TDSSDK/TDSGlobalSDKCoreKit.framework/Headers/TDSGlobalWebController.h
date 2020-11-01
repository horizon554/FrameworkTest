//
//  TDSGlobalWebController.h
//  NativeApp
//
//  Created by JiangJiahao on 2018/10/10.
//  Copyright © 2018 JiangJiahao. All rights reserved.
//  简单的网页浏览器

#import <UIKit/UIKit.h>
#import <TDSGlobalSDKCoreKit/TDSGlobalViewControllerBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalWebController : TDSGlobalViewControllerBase

@property (nonatomic) NSString *WebControllerTitle;

+ (TDSGlobalWebController *)createWebController:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
