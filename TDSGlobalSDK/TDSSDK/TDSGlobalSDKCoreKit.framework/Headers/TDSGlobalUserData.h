//
//  TDSGlobalUserData.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/20.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TDSGlobalSDKCoreKit/TDSGlobalUserToken.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalUserData : NSObject <NSCoding>

@property (nonatomic) NSInteger userId;
@property (nonatomic) NSString *sub;
@property (nonatomic) NSString *name;
@property (nonatomic) TDSGlobalUserToken *token;

@end

NS_ASSUME_NONNULL_END
