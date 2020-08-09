//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (HeadBoard)
@property(readonly, nonatomic, getter=hb_shouldIgnoreLaunchNetworkCheck) _Bool shouldIgnoreLaunchNetworkCheck;
@property(readonly, nonatomic, getter=hb_shouldReloadOrderFromBundle) _Bool shouldReloadOrderFromBundle;
@property(readonly, nonatomic, getter=hb_alternativeApplicationOrder) NSString *alternativeApplicationOrder;
- (void)hb_removeVideoSubscriberApplicationDefaults;	// IMP=0x0000000100039888
@property(readonly, nonatomic, getter=hb_videoSubscriberApplicationPosition) unsigned long long videoSubscriberApplicationPosition;
@property(readonly, nonatomic, getter=hb_videoSubscriberApplicationBundleIdentifier) NSString *videoSubscriberApplicationBundleIdentifier;
@end

