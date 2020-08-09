//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSAppInfoControllerObserver-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, PBSAppInfoConfiguration, PBSAppInfoController;
@protocol HBAppInfoControllerDelegate;

@interface HBAppInfoController : NSObject <PBSAppInfoControllerObserver>
{
    id <HBAppInfoControllerDelegate> _delegate;	// 8 = 0x8
    PBSAppInfoConfiguration *_configuration;	// 16 = 0x10
    PBSAppInfoController *_appInfoController;	// 24 = 0x18
    NSMutableDictionary *_mutableAppInfos;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001ba3c
@property(readonly, nonatomic, getter=_mutableAppInfos) NSMutableDictionary *mutableAppInfos; // @synthesize mutableAppInfos=_mutableAppInfos;
@property(readonly, nonatomic, getter=_appInfoController) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic, setter=_setConfiguration:) PBSAppInfoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HBAppInfoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010001b740
- (void)_notifyDelegateDidUpdateAlternateAppIconsForAppInfos:(id)arg1;	// IMP=0x000000010001b6c4
- (void)_notifyDelegateDidRemoveAppInfos:(id)arg1;	// IMP=0x000000010001b648
- (void)_notifyDelegateDidAddAppInfos:(id)arg1;	// IMP=0x000000010001b5cc
- (void)_didUpdateConfiguration:(id)arg1;	// IMP=0x000000010001b448
- (void)_didUpdateAppInfos:(id)arg1;	// IMP=0x000000010001b134
- (void)_didRemoveAppInfos:(id)arg1;	// IMP=0x000000010001ae18
- (void)_didAddAppInfos:(id)arg1;	// IMP=0x000000010001ab18
- (id)appInfoWithBundleIdentifier:(id)arg1;	// IMP=0x000000010001aa98
- (void)enumerateAppInfosUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a988
@property(readonly, nonatomic) NSDictionary *appInfos;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010001a608
- (id)_initWithAppInfoController:(id)arg1;	// IMP=0x000000010001a31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

