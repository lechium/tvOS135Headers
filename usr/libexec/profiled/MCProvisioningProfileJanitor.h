//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCProvisioningProfileJanitor : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (id)sharedJanitor;	// IMP=0x0000000100056bcc
- (void).cxx_destruct;	// IMP=0x000000010005876c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)earliestRequiredManagedAppValidationDate;	// IMP=0x000000010005864c
- (void)revalidateManagedApps;	// IMP=0x0000000100058640
- (void)_enumerateManagedAppUPPs:(CDUnknownBlockType)arg1;	// IMP=0x0000000100057fc8
- (void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(_Bool)arg3;	// IMP=0x0000000100056df4
- (void)updateMISTrust;	// IMP=0x0000000100056ddc
- (void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100056c38
- (id)init;	// IMP=0x0000000100056b64

@end

