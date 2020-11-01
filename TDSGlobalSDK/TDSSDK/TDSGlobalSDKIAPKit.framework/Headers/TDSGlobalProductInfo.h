//
//  TDSGlobalProductInfo.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/9/25.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalProductInfo : NSObject
@property(nonatomic, readonly) NSString *localizedDescription;

@property(nonatomic, readonly) NSString *localizedTitle;

@property(nonatomic, readonly) NSDecimalNumber *price;

@property(nonatomic, readonly) NSLocale *priceLocale;

@property(nonatomic, readonly) NSString *productIdentifier;

@end

NS_ASSUME_NONNULL_END
