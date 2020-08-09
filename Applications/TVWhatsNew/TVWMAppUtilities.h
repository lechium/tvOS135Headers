//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVWNAppUtilities-Protocol.h"

@class JSManagedValue;

@interface TVWMAppUtilities : IKJSObject <TVWNAppUtilities>
{
    _Bool _shouldSkipVersionCheck;	// 8 = 0x8
    _Bool _imagePreloadingInProgress;	// 9 = 0x9
    JSManagedValue *_managedPreloaderReference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000050b0
@property(nonatomic) _Bool imagePreloadingInProgress; // @synthesize imagePreloadingInProgress=_imagePreloadingInProgress;
@property(retain, nonatomic) JSManagedValue *managedPreloaderReference; // @synthesize managedPreloaderReference=_managedPreloaderReference;
@property(nonatomic) _Bool shouldSkipVersionCheck; // @synthesize shouldSkipVersionCheck=_shouldSkipVersionCheck;
- (id)_imageProxyFromDictionary:(id)arg1;	// IMP=0x0000000100004d70
- (void)_preloadImages:(id)arg1:(id)arg2;	// IMP=0x0000000100004394
- (_Bool)preloadImages:(id)arg1:(id)arg2;	// IMP=0x00000001000042d0
- (id)lastUpdatedFromOSVersion;	// IMP=0x0000000100004274
- (_Bool)isRunningAsViewService;	// IMP=0x000000010000426c
- (id)getItem:(id)arg1;	// IMP=0x00000001000041e8
- (_Bool)setItem:(id)arg1:(id)arg2;	// IMP=0x000000010000411c
- (void)exit;	// IMP=0x0000000100004078
- (void)suspend;	// IMP=0x0000000100004020
- (void)setNeedsBecomeActive;	// IMP=0x0000000100003fc8

@end

