//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"

@class NSBundle, NSString, UIViewController, XBApplicationLaunchCompatibilityInfo, XBLaunchImageError, XBLaunchInterface, XBLaunchStateRequest, _XBWrapperWindow;

@interface XBLaunchImageContextWrapper : NSObject <BSInvalidatable>
{
    UIViewController *_rootViewController;	// 8 = 0x8
    XBLaunchInterface *_launchInterface;	// 16 = 0x10
    _XBWrapperWindow *_wrapperWindow;	// 24 = 0x18
    XBApplicationLaunchCompatibilityInfo *_appInfo;	// 32 = 0x20
    XBLaunchStateRequest *_launchRequest;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
    XBLaunchImageError *_error;	// 56 = 0x38
}

+ (id)contextWrapperForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2;	// IMP=0x00000001000028b8
+ (void)initialize;	// IMP=0x000000010000281c
- (void).cxx_destruct;	// IMP=0x0000000100003ca4
@property(readonly, nonatomic) XBLaunchImageError *error; // @synthesize error=_error;
@property(retain, nonatomic) XBLaunchStateRequest *launchRequest; // @synthesize launchRequest=_launchRequest;
@property(retain, nonatomic) XBApplicationLaunchCompatibilityInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) _XBWrapperWindow *wrapperWindow; // @synthesize wrapperWindow=_wrapperWindow;
@property(readonly, nonatomic) XBLaunchInterface *launchInterface; // @synthesize launchInterface=_launchInterface;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)invalidate;	// IMP=0x0000000100003bc8
- (void)updateLaunchRequest:(id)arg1;	// IMP=0x0000000100003b5c
- (void)_update;	// IMP=0x00000001000037a8
- (void)_configureNewWindow;	// IMP=0x0000000100002a70
@property(readonly, nonatomic) unsigned int contextID;
- (id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2;	// IMP=0x0000000100002948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

