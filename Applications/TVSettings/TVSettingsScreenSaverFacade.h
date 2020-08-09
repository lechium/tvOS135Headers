//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, TVPhotoCollection, TVPhotoCollectionGroup, TVSPreferences;

@interface TVSettingsScreenSaverFacade : NSObject
{
    NSArray *_availablePhotoCollections;	// 8 = 0x8
    TVPhotoCollection *_selectedPhotoCollection;	// 16 = 0x10
    TVSPreferences *_screenSaverAppPrefs;	// 24 = 0x18
    TVSPreferences *_airPlayAppPrefs;	// 32 = 0x20
    id _screenSaverObserverToken;	// 40 = 0x28
    _Bool _isFetchingCollections;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingScreenSaverName;	// IMP=0x0000000100098b68
+ (id)sharedInstance;	// IMP=0x0000000100098740
- (void).cxx_destruct;	// IMP=0x000000010009acfc
- (void)_fetchPhotoCollections;	// IMP=0x000000010009ab3c
- (void)_openApplicationWithIdentifer:(id)arg1;	// IMP=0x000000010009a8f8
- (void)_photoSourcesUpdated:(id)arg1;	// IMP=0x000000010009a8ec
- (void)launchPhotoSourcesDaemon;	// IMP=0x000000010009a8e0
- (void)killPhotoSourcesDaemon;	// IMP=0x000000010009a8d4
- (void)disableScreenSaverProviders;	// IMP=0x000000010009a5f8
- (void)resetToIdleScreensaver;	// IMP=0x000000010009a5ac
@property(copy, nonatomic) NSString *selectedIdleScreenRefreshInterval;
@property(readonly, copy, nonatomic) NSArray *availableIdleScreenRefreshIntervals;
@property(nonatomic) _Bool useIdleScreen;
@property(copy, nonatomic) NSURL *conferenceRoomDisplayBackgroundPhotoURL;
@property(nonatomic, getter=isConferenceRoomDisplayEnabled) _Bool conferenceRoomDisplayEnabled;
@property(copy, nonatomic) NSString *conferenceRoomDisplayMessage;
@property(copy, nonatomic) NSString *transitionType;
@property(nonatomic) long long timePerSlide;
@property(readonly, copy, nonatomic) NSArray *availableTimesPerSlide;
@property(readonly, nonatomic) NSString *screenSaverName;
@property(copy, nonatomic) NSString *screenSaverStyle;
@property(readonly, nonatomic) NSString *screenSaverPhotoCollectionIdentifier;
@property(readonly, nonatomic) id screenSaverType;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollectionGroups;
@property(readonly, nonatomic) TVPhotoCollectionGroup *selectedPhotoCollectionGroup;
@property(retain, nonatomic) TVPhotoCollection *selectedPhotoCollection;
@property(readonly, copy, nonatomic) NSArray *availablePhotoCollections;
@property(nonatomic) _Bool allowsScreenSaverOverMusic;
@property(nonatomic) long long activationDelay;
@property(readonly, copy, nonatomic) NSArray *availableActivationDelays;
- (void)dealloc;	// IMP=0x0000000100098af0
- (id)init;	// IMP=0x000000010009882c

@end
