//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSTransaction;
@protocol TVSTransactionManaging;

@protocol TVSTransactionManagerObserver <NSObject>

@optional
- (void)transactionManager:(id <TVSTransactionManaging>)arg1 didCompleteTransaction:(BSTransaction *)arg2;
- (void)transactionManager:(id <TVSTransactionManaging>)arg1 willBeginTransaction:(BSTransaction *)arg2;
@end

