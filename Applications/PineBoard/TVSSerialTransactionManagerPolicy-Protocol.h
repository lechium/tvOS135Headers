//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSTransaction, NSArray;

@protocol TVSSerialTransactionManagerPolicy <NSObject>
- (NSArray *)resultingQueueAfterAddingTransaction:(BSTransaction *)arg1 inCurrentQueue:(NSArray *)arg2;
- (long long)actionOnRunningTransaction:(BSTransaction *)arg1 afterAddingTransaction:(BSTransaction *)arg2;
@end
