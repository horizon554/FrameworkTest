//
//  TDSGlobalUserDataManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDSGlobalUserData.h"
#import "TDSGlobalLoginType.h"

NS_ASSUME_NONNULL_BEGIN
@interface TDSGlobalUserDataManager : NSObject

+ (TDSGlobalUserData *)getCurrentUserData;

+ (void)updateLoginState:(BOOL)loggedIn;
+ (BOOL)isUserLoggedIn;
+ (BOOL)isUserTokenValid;

+ (void)updateLoginType:(TDSGlobalSDKLoginType)loginType;
+ (TDSGlobalSDKLoginType)getCurLoginType;

+ (void)userLoginSuccess;
+ (void)userLogout;

/// 是否需要弹隐私协议
+ (BOOL)needShowAgreement;
+ (void)updateUserServiceAgreement;

/// 推送开关
+ (BOOL)needPushService;
+ (void)updatePushServiceStatu:(BOOL)statu;

@end

NS_ASSUME_NONNULL_END
