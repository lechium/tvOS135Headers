//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSSerialTransactionManagerPolicy-Protocol.h"

@class NSString;

@interface _PBSerialTransactionManagerPolicyForegroundOpenApp : NSObject <TVSSerialTransactionManagerPolicy>
{
}

- (id)resultingQueueAfterAddingTransaction:(id)arg1 inCurrentQueue:(id)arg2;	// IMP=0x000000010006e19c
- (long long)actionOnRunningTransaction:(id)arg1 afterAddingTransaction:(id)arg2;	// IMP=0x000000010006dd34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

