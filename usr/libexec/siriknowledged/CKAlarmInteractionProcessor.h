//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKInteractionProcessing-Protocol.h"

@class NSString;

@interface CKAlarmInteractionProcessor : NSObject <CKInteractionProcessing>
{
}

- (_Bool)processInteraction:(id)arg1 bundleId:(id)arg2;	// IMP=0x000000010000222c
- (id)supportedTypes;	// IMP=0x0000000100002178
- (id)bundleIdPredicate;	// IMP=0x0000000100002138
- (_Bool)supportsSiriDonations;	// IMP=0x0000000100002130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

