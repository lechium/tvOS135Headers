//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTPreferences : NSObject
{
}

+ (_Bool)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(_Bool)arg2;	// IMP=0x00000001000ba094
+ (id)_defaultSettings;	// IMP=0x00000001000b9d28
+ (_Bool)copySettingsToSharedContainer;	// IMP=0x00000001000b9b24
+ (void)moveUserDefaultToSharedContainer:(id)arg1;	// IMP=0x00000001000b9870
+ (void)registerDefaults;	// IMP=0x00000001000b97f8
+ (id)sharedUserDefaults;	// IMP=0x00000001000b96f8

@end

