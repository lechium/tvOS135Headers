//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVSUser, TVSettingsAccountsFacadePasswordSetting;

@interface TVSettingsUser : NSObject
{
    _Bool _canBeRemoved;	// 8 = 0x8
    _Bool _needsHomeInviteToDedupUser;	// 9 = 0x9
    NSString *_shortName;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_iTunesUsername;	// 32 = 0x20
    TVSettingsAccountsFacadePasswordSetting *_passwordSetting;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    TVSUser *_systemUser;	// 56 = 0x38
    NSString *_homeInvite;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100086c94
@property(retain, nonatomic) NSString *homeInvite; // @synthesize homeInvite=_homeInvite;
@property(readonly, nonatomic) TVSUser *systemUser; // @synthesize systemUser=_systemUser;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool needsHomeInviteToDedupUser; // @synthesize needsHomeInviteToDedupUser=_needsHomeInviteToDedupUser;
@property(readonly, nonatomic) TVSettingsAccountsFacadePasswordSetting *passwordSetting; // @synthesize passwordSetting=_passwordSetting;
@property(readonly, nonatomic) _Bool canBeRemoved; // @synthesize canBeRemoved=_canBeRemoved;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (unsigned long long)hash;	// IMP=0x0000000100086c2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100086b88
- (id)description;	// IMP=0x0000000100086b08
- (id)initWithSystemUser:(id)arg1 amsBag:(id)arg2;	// IMP=0x0000000100086678

@end

