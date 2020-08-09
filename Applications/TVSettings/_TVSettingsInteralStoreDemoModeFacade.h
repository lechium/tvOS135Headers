//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TVSettingsInteralStoreDemoModeFacade : NSObject
{
    _Bool _videoPlaybackRestricted;	// 8 = 0x8
    _Bool _hasCustomScreenSaverConfigurationURLString;	// 9 = 0x9
    _Bool _requestUnenroll;	// 10 = 0xa
    NSString *_screenSaverConfigurationURLString;	// 16 = 0x10
    double _videoPlaybackRestrictionTimeout;	// 24 = 0x18
    NSString *_modeType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100047c50
@property(nonatomic) _Bool requestUnenroll; // @synthesize requestUnenroll=_requestUnenroll;
@property(nonatomic) _Bool hasCustomScreenSaverConfigurationURLString; // @synthesize hasCustomScreenSaverConfigurationURLString=_hasCustomScreenSaverConfigurationURLString;
@property(copy, nonatomic) NSString *modeType; // @synthesize modeType=_modeType;
@property(nonatomic) double videoPlaybackRestrictionTimeout; // @synthesize videoPlaybackRestrictionTimeout=_videoPlaybackRestrictionTimeout;
@property(nonatomic) _Bool videoPlaybackRestricted; // @synthesize videoPlaybackRestricted=_videoPlaybackRestricted;
@property(copy, nonatomic) NSString *screenSaverConfigurationURLString; // @synthesize screenSaverConfigurationURLString=_screenSaverConfigurationURLString;
- (_Bool)applyChanges;	// IMP=0x0000000100047728
@property(readonly, getter=isDirty) _Bool dirty;
- (unsigned long long)modeTypeEnum;	// IMP=0x000000010004740c
- (unsigned long long)modeTypeIndexToEnum:(long long)arg1;	// IMP=0x00000001000473f8
- (id)availableModeTypes;	// IMP=0x0000000100047370
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isContentUnlocked) _Bool contentUnlocked;
@property(readonly, nonatomic, getter=isEnrolledInDeKOTA) _Bool enrolledInDeKOTA;
- (void)restoreDefaults;	// IMP=0x0000000100047004
- (id)init;	// IMP=0x0000000100046fac

@end
