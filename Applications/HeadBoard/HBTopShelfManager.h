//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBTopShelfExtensionControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue, NSOrderedSet, NSString;

@interface HBTopShelfManager : NSObject <HBTopShelfExtensionControllerDelegate>
{
    NSOrderedSet *_dockApplicationIdentifiers;	// 8 = 0x8
    NSOperation *_infligtModelFetchOperation;	// 16 = 0x10
    NSOperationQueue *_modelFetchOperationQueue;	// 24 = 0x18
    NSMutableDictionary *_extensionControllerByApplicationIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100056f5c
@property(retain, nonatomic) NSMutableDictionary *extensionControllerByApplicationIdentifier; // @synthesize extensionControllerByApplicationIdentifier=_extensionControllerByApplicationIdentifier;
@property(retain, nonatomic) NSOperationQueue *modelFetchOperationQueue; // @synthesize modelFetchOperationQueue=_modelFetchOperationQueue;
@property(retain, nonatomic) NSOperation *infligtModelFetchOperation; // @synthesize infligtModelFetchOperation=_infligtModelFetchOperation;
@property(copy, nonatomic) NSOrderedSet *dockApplicationIdentifiers; // @synthesize dockApplicationIdentifiers=_dockApplicationIdentifiers;
- (void)_removeTopShelfExtensionControllerForAppIdentifierIfRequired:(id)arg1;	// IMP=0x0000000100056dcc
- (void)_addTopShelfExtensionControllerForApplicationIdentifierIfRequired:(id)arg1;	// IMP=0x0000000100056c08
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100056bc4
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100056b80
- (void)topShelfExtensionController:(id)arg1 enqueueModelFetchWithOperation:(id)arg2;	// IMP=0x0000000100056a0c
- (id)modelControllerForApplicationIdentifier:(id)arg1;	// IMP=0x00000001000568bc
- (void)updateWithDockApplicationIdentifiers:(id)arg1;	// IMP=0x00000001000565b8
- (id)init;	// IMP=0x0000000100056474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

