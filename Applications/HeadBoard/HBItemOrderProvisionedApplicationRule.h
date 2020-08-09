//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBItemOrderProvisionedApplicationIdentifiersRule.h"

#import "HBItemOrderRule-Protocol.h"

@class NSString;

@interface HBItemOrderProvisionedApplicationRule : HBItemOrderProvisionedApplicationIdentifiersRule <HBItemOrderRule>
{
}

- (id)tetherForApplication:(id)arg1 inProvisionedApplications:(id)arg2;	// IMP=0x0000000100019878
- (id)applicationSetSortedByProvisioningOrder:(id)arg1;	// IMP=0x000000010001965c
- (id)provisionedApplicationsInItems:(id)arg1;	// IMP=0x000000010001945c
- (id)insertApplications:(id)arg1 into:(id)arg2;	// IMP=0x0000000100019148
- (_Bool)evaluateWithApplication:(id)arg1;	// IMP=0x00000001000190a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long processingLimit;
@property(readonly) Class superclass;

@end
