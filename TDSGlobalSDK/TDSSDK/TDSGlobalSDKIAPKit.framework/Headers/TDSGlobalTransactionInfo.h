//
//  TDSGlobalTransactionInfo.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/9/25.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalTransactionInfo : NSObject
// The unique server-provided identifier
@property (nonatomic,readonly) NSString *transactionIdentifier;

@property (nonatomic,readonly) NSString *productIdentifier;

@end

NS_ASSUME_NONNULL_END
