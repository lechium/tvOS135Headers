//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDD, NSDictionary;
@protocol OS_dispatch_queue;

@interface CDDPrivacyMonitor : NSObject
{
    CDD *cdd;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *privacyDispatchQ;	// 16 = 0x10
    NSDictionary *tableEntryOptions;	// 24 = 0x18
    _Bool updateAllowed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002eaf8
@property(readonly) _Bool updateAllowed; // @synthesize updateAllowed;
@property(retain, nonatomic) CDD *cdd; // @synthesize cdd;
- (void)deletePrivacySensitiveDBEntries;	// IMP=0x000000010002ead4
- (_Bool)isManagedConfigurationSettingOn;	// IMP=0x000000010002ea80
- (void)privacyCloak;	// IMP=0x000000010002e8fc
- (id)initWithCDDinstance:(id)arg1;	// IMP=0x000000010002d638
- (_Bool)loadCurrentPrivacySetting;	// IMP=0x000000010002d4ac
- (void)shadowRemotePrivacySetting:(_Bool)arg1;	// IMP=0x000000010002d344
- (void)saveCurrentPrivacySetting:(_Bool)arg1;	// IMP=0x000000010002d228

@end
