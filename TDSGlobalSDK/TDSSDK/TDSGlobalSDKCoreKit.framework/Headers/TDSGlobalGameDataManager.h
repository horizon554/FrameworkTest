//
//  TDSGlobalGameDataManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDSGlobalGameData.h"

NS_ASSUME_NONNULL_BEGIN
@interface TDSGlobalGameDataManager : NSObject

+ (TDSGlobalGameDataManager *)shareInstance;

+ (TDSGlobalGameData *)getCurrentGameData;
+ (void)setLanguageLocale:(NSInteger)locale;

+ (void)getClientConfig:(void (^)(BOOL success))handler;

/// 是否已经初始化
+ (BOOL)isGameInited;
/// 是否需要客服
+ (BOOL)needReportService;
#pragma mark - configs
+ (BOOL)isGameInKorea;
+ (BOOL)isGameInNA;
@end

NS_ASSUME_NONNULL_END
