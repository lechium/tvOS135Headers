//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)shared;	// IMP=0x0000000100017ea0
- (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018640
- (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001845c
- (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018294
- (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001808c
- (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017fd4
- (_Bool)isHomePodAvailable;	// IMP=0x0000000100017fcc
- (_Bool)isWatchAvailable;	// IMP=0x0000000100017f0c

@end
