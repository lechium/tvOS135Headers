//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

