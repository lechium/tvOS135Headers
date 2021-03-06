//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKThirdPartyAppInteractionLimiter : NSObject
{
}

+ (double)_interactionsPerLaunchCapWithReferenceDonationCount:(id)arg1;	// IMP=0x000000010000c624
+ (id)limitDonationsWithAppLaunchCounts:(id)arg1 interactionDonationCounts:(id)arg2 capMultipliers:(id)arg3 priorLaunchCount:(double)arg4 priorIntentCount:(double)arg5;	// IMP=0x000000010000c194
+ (void)writeContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bfb4
+ (id)appsInteractionDonationCountForIntentType:(id)arg1;	// IMP=0x000000010000bab8
+ (id)appLaunchCountForAppsWithBundleIds:(id)arg1;	// IMP=0x000000010000b4a0
+ (id)currentAppInteractionsContext;	// IMP=0x000000010000b1a4
+ (double)priorInteractionDonationCount;	// IMP=0x000000010000af10
+ (double)priorLaunchCount;	// IMP=0x000000010000ac7c
+ (id)capMultipliersForIntentType:(id)arg1;	// IMP=0x000000010000a6ec
+ (_Bool)isAppInteractionLimiterDisabled;	// IMP=0x000000010000a3f8

@end

