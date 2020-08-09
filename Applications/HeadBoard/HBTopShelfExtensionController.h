//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBTopShelfFetchTimerDelegate-Protocol.h"
#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "TVTopShelfContentExtensionControllingDelegate-Protocol.h"

@class HBTopShelfFetchContentOperation, HBTopShelfFetchTimer, HBTopShelfStaticImageModel, LSApplicationProxy, NSMutableDictionary, NSString, TVTopShelfContentExtensionAttributes;
@protocol HBTopShelfExtensionControllerDelegate, OS_dispatch_queue_serial, TVTopShelfContentExtensionControlling, TVTopShelfContentPrivate;

@interface HBTopShelfExtensionController : NSObject <HBTopShelfFetchTimerDelegate, LSApplicationWorkspaceObserverProtocol, TVTopShelfContentExtensionControllingDelegate>
{
    _Bool _started;	// 8 = 0x8
    _Bool _staticModelActive;	// 9 = 0x9
    _Bool _contentExtensionTrusted;	// 10 = 0xa
    _Bool _internetBecameAvailable;	// 11 = 0xb
    LSApplicationProxy *_applicationProxy;	// 16 = 0x10
    id <HBTopShelfExtensionControllerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _pauseFetchCount;	// 32 = 0x20
    NSMutableDictionary *_modelControllerContextByIdentifier;	// 40 = 0x28
    NSObject<OS_dispatch_queue_serial> *_processingQueue;	// 48 = 0x30
    HBTopShelfStaticImageModel *_staticModel;	// 56 = 0x38
    id <TVTopShelfContentExtensionControlling> _contentExtensionController;	// 64 = 0x40
    TVTopShelfContentExtensionAttributes *_contentExtensionAttributes;	// 72 = 0x48
    id <TVTopShelfContentPrivate> _content;	// 80 = 0x50
    HBTopShelfFetchContentOperation *_fetchOperation;	// 88 = 0x58
    HBTopShelfFetchTimer *_fetchTimer;	// 96 = 0x60
}

+ (_Bool)_isApplicationRestricted:(id)arg1;	// IMP=0x0000000100024e3c
+ (_Bool)_contentIsDisplayable:(id)arg1;	// IMP=0x0000000100024dd8
- (void).cxx_destruct;	// IMP=0x0000000100025b78
@property(nonatomic) _Bool internetBecameAvailable; // @synthesize internetBecameAvailable=_internetBecameAvailable;
@property(retain, nonatomic) HBTopShelfFetchTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(retain, nonatomic) HBTopShelfFetchContentOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) id <TVTopShelfContentPrivate> content; // @synthesize content=_content;
@property(nonatomic, getter=isContentExtensionTrusted) _Bool contentExtensionTrusted; // @synthesize contentExtensionTrusted=_contentExtensionTrusted;
@property(retain, nonatomic) TVTopShelfContentExtensionAttributes *contentExtensionAttributes; // @synthesize contentExtensionAttributes=_contentExtensionAttributes;
@property(retain, nonatomic) id <TVTopShelfContentExtensionControlling> contentExtensionController; // @synthesize contentExtensionController=_contentExtensionController;
@property(nonatomic, getter=isStaticModelActive) _Bool staticModelActive; // @synthesize staticModelActive=_staticModelActive;
@property(retain, nonatomic) HBTopShelfStaticImageModel *staticModel; // @synthesize staticModel=_staticModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue_serial> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSMutableDictionary *modelControllerContextByIdentifier; // @synthesize modelControllerContextByIdentifier=_modelControllerContextByIdentifier;
@property(nonatomic) unsigned long long pauseFetchCount; // @synthesize pauseFetchCount=_pauseFetchCount;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak id <HBTopShelfExtensionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
- (void)_performExtensionRequestForItem:(id)arg1 requestLogName:(id)arg2 checkDelegateFlagsBlock:(CDUnknownBlockType)arg3 checkEntitledBlock:(CDUnknownBlockType)arg4 performRequestBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001000254f8
- (id)_topShelfContentExtensionControllerForApplicationBundleIdentifier:(id)arg1;	// IMP=0x0000000100025450
- (void)_enumerateModelControllerWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000252b4
- (id)_modelForContent:(id)arg1;	// IMP=0x0000000100024b80
- (id)_model;	// IMP=0x0000000100024ab8
- (long long)_fetchPriority;	// IMP=0x00000001000249e4
- (void)_handleReceivedContent:(id)arg1 allowStaticModel:(_Bool)arg2;	// IMP=0x0000000100024430
- (_Bool)_isModelBeingUsed;	// IMP=0x00000001000243b4
- (void)_removeModelControllerForIdentifier:(id)arg1;	// IMP=0x0000000100024188
- (void)_addModelController:(id)arg1;	// IMP=0x0000000100023edc
- (void)_fetchOperationDidComplete:(id)arg1;	// IMP=0x0000000100023c34
- (void)_updateWithApplicationProxy:(id)arg1;	// IMP=0x00000001000238e8
- (void)_resumeFetchTimer;	// IMP=0x000000010002387c
- (void)_pauseFetchTimer;	// IMP=0x000000010002383c
- (void)_resumeFetching;	// IMP=0x00000001000237a0
- (void)_pauseFetching;	// IMP=0x00000001000236cc
- (void)_handleExtensionActionResult:(id)arg1 forAction:(id)arg2 forItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023290
- (void)_prepareForExtensionAction;	// IMP=0x0000000100023284
- (void)_stop;	// IMP=0x000000010002309c
- (void)_start;	// IMP=0x0000000100022e28
- (void)_verifyContentExtensionTrust;	// IMP=0x0000000100022cf0
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000227f4
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x00000001000225c0
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x000000010002238c
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010002211c
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x0000000100021eac
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x0000000100021c78
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x0000000100021a44
- (void)_handlePurgeTopShelfContentNotification:(id)arg1;	// IMP=0x0000000100021724
- (void)_handleInternetAvailabilityChangedNotification:(id)arg1;	// IMP=0x00000001000213b0
- (void)_handleRestrictionsSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000100021040
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100020eec
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100020db4
- (void)connectionInterruptedForTopShelfContentExtensionController:(id)arg1;	// IMP=0x0000000100020cc0
- (void)contentDidChangeForTopShelfContentExtensionController:(id)arg1;	// IMP=0x0000000100020abc
- (_Bool)topShelfFetchTimer:(id)arg1 startTopShelfFetchWithIdentifier:(id)arg2;	// IMP=0x00000001000203ac
- (void)_didInvalidateModelControllerWithIdentfier:(id)arg1;	// IMP=0x00000001000201e0
- (void)_performViewServicePresentationAction:(id)arg1 forItem:(id)arg2 viewServiceBundleIdentifier:(id)arg3 viewControllerClassName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f938
- (void)_performCustomAction:(id)arg1 forItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f2a4
- (void)_didSelectAction:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010001f0a8
- (void)_didShowItem:(id)arg1;	// IMP=0x000000010001ef3c
- (id)modelController;	// IMP=0x000000010001ecac
- (void)stop;	// IMP=0x000000010001eb84
- (void)start;	// IMP=0x000000010001ea5c
@property(readonly, nonatomic) _Bool extensionCanPerformPrivateActions;
@property(readonly, copy, nonatomic) NSString *containingApplicationBundleIdentifier;
- (void)dealloc;	// IMP=0x000000010001e73c
- (id)initWithApplicationProxy:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010001e5e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

