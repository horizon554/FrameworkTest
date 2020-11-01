//
//  TDSGlobalLoginType.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,TDSGlobalSDKLoginType) {
    TDSGlobalSDKLoginTypeNone = 0,
    TDSGlobalSDKLoginTypeTapTap,
    TDSGlobalSDKLoginTypeApple,
    TDSGlobalSDKLoginTypeGoogle,
    TDSGlobalSDKLoginTypeFacebook,
    TDSGlobalSDKLoginTypeLine,
    TDSGlobalSDKLoginTypeTwitter,
    TDSGlobalSDKLoginTypeGuest
};
extern NSString *const TAPTAP_LOGIN;
extern NSString *const GOOGLE_LOGIN;
extern NSString *const FACEBOOK_LOGIN;
extern NSString *const APPLE_LOGIN;
extern NSString *const GUEST_LOGIN;

@interface TDSGlobalLoginType : NSObject
+ (NSString *)getAccountString:(TDSGlobalSDKLoginType)loginType;
+ (NSString *)getAccountPureString:(TDSGlobalSDKLoginType)loginType;
@end

NS_ASSUME_NONNULL_END
