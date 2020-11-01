//
//  TDSGameData.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//  游戏数据

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalGameData : NSObject
@property (nonatomic) NSString *clientId;

@property (nonatomic) NSString *region;                           // 发行地区
@property (nonatomic) NSString *developerId;                    // 开发者ID
@property (nonatomic) NSString *appId;

@property (nonatomic) NSString *channel;                        // 渠道标识

@property (nonatomic) BOOL enableTapDB;

@property (nonatomic) NSString *facebookClientId;
@property (nonatomic) NSString *googleClientId;
@property (nonatomic) NSString *taptapClientId;
@property (nonatomic) NSString *tapdbClientId;
@property (nonatomic) NSString *appsflyerClientId;

@property (nonatomic) NSMutableArray *loginEntries;             // 登录入口
@property (nonatomic) NSMutableArray *bindEntries;              // 绑定入口

@property (nonatomic) NSString *reportUrl;                      // 客服地址

@property (nonatomic) NSInteger languageLocale;                 // 语言

/*
 协议
 */
@property (nonatomic) NSString *serviceTermsUrl;
@property (nonatomic) NSString *serviceAgreementUrl;
@property (nonatomic) NSString *californiaPrivacyUrl;

@end

NS_ASSUME_NONNULL_END
