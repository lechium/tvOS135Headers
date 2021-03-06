//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "PBSViewServiceInterface-Protocol.h"

@class BSSimpleAssertion, BSWatchdog, NSString;
@protocol PBSimpleRemoteViewControllerDelegate;

@interface PBSimpleRemoteViewController : _UIRemoteViewController <PBSViewServiceInterface>
{
    _Bool _terminated;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    id <PBSimpleRemoteViewControllerDelegate> _delegate;	// 24 = 0x18
    BSSimpleAssertion *_dismissalAssertion;	// 32 = 0x20
    BSWatchdog *_dismissalWatchdog;	// 40 = 0x28
}

+ (id)exportedInterface;	// IMP=0x000000010015b1a8
+ (id)serviceViewControllerInterface;	// IMP=0x000000010015adf0
- (void).cxx_destruct;	// IMP=0x000000010015b628
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) BSWatchdog *dismissalWatchdog; // @synthesize dismissalWatchdog=_dismissalWatchdog;
@property(readonly, nonatomic) BSSimpleAssertion *dismissalAssertion; // @synthesize dismissalAssertion=_dismissalAssertion;
@property(nonatomic) __weak id <PBSimpleRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)dealloc;	// IMP=0x000000010015ad78
- (void)_dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 dismissalResult:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010015a6ec
- (void)dismissWithResult:(id)arg1;	// IMP=0x000000010015a2c4
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000010015a0f8
- (void)dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010015a03c
- (void)messageViewServiceWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100159e30
- (void)prepareViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100159b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

