//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSProcessDelegate-Protocol.h"

@class BKSProcess, NSDictionary, NSString;
@protocol BKAlternateSystemAppDelegate, OS_dispatch_queue;

@interface BKAlternateSystemApp : NSObject <BKSProcessDelegate>
{
    NSString *_bundleID;	// 8 = 0x8
    id <BKAlternateSystemAppDelegate> _delegate;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    BKSProcess *_process;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)bundleInfoOverrides;	// IMP=0x0000000100022154
- (void).cxx_destruct;	// IMP=0x0000000100021de4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BKSProcess *process; // @synthesize process=_process;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) __weak id <BKAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)process:(id)arg1 didExitWithContext:(id)arg2;	// IMP=0x0000000100021cec
@property(readonly, copy) NSString *description;
- (void)_noteExitedWithContext:(id)arg1;	// IMP=0x0000000100021ae8
- (void)_noteLaunchSucceeded;	// IMP=0x00000001000219dc
- (void)_noteLaunchFailed;	// IMP=0x00000001000218bc
- (_Bool)terminate;	// IMP=0x000000010002168c
- (_Bool)launch;	// IMP=0x0000000100020be0
- (void)dealloc;	// IMP=0x0000000100020b90
- (id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3;	// IMP=0x0000000100020abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

