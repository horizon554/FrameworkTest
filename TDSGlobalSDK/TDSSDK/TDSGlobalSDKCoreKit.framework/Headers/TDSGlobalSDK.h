//
//  TDSGlobalSDK.h
//  TDSGlobalSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,TDSLanguageLocale) {
    TDSLanguageLocaleSimplifiedChinese = 0,                 // 简体中文
    TDSLanguageLocaleTraditionalChinese,                    // 繁体中文
    TDSLanguageLocaleEnglish,                               // 英文
    TDSLanguageLocaleThai,                                  // 泰文
    TDSLanguageLocaleBahasa                                 // 印尼文
};

/**
 Describe the result of init
 */
typedef void(^TDSInitResultHandler)(BOOL success);

@interface TDSGlobalSDK : NSObject
#pragma mark - SDK CONFIG
+ (NSString *)getTDSSDKVersion;

+ (void)setLanguage:(TDSLanguageLocale)locale;

+ (BOOL)application:(UIApplication *)application
didFinishLaunchingWithOptions:(nullable NSDictionary<UIApplicationLaunchOptionsKey, id> *)launchOptions;

+ (void)initTDSSDK:(TDSInitResultHandler)handler;

// test
+ (void)initTDSSDK:(TDSInitResultHandler)handler clientId:(NSString *)clientId;

#pragma mark - SDK FUCTIONS
+ (void)report:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

+ (void)storeReview;

#pragma mark - Applicaiton Delegate
/**
 处理跳转app回调
 
 @param url 回调的URL
 */
+ (void)application:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;

+ (void)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

+ (void)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray<id<UIUserActivityRestoring>> * _Nullable))restorationHandler;

+ (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

+ (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));

+ (void)scene:(UIScene *)scene continueUserActivity:(NSUserActivity *)userActivity  API_AVAILABLE(ios(13.0));
@end

NS_ASSUME_NONNULL_END
