//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTRestrictionsUtil : NSObject
{
}

+ (void)_setAllowExplicitContent;	// IMP=0x000000010001ef44
+ (id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)arg1;	// IMP=0x000000010001ee38
+ (_Bool)_isActiveAccountAllowedToUpdateRestrictions;	// IMP=0x000000010001edd8
+ (_Bool)_isExplicitContentDisallowedInCurrentStoreFront;	// IMP=0x000000010001ed14
+ (_Bool)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;	// IMP=0x000000010001ec50
+ (_Bool)_calculateIsRestrictionsPasscodeSet;	// IMP=0x000000010001ec3c
+ (void)didDisplayExplicitRestrictionAlertOfType:(int)arg1;	// IMP=0x000000010001ebb4
+ (_Bool)_isRestrictedByAdministrator;	// IMP=0x000000010001eb6c
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e9d0
+ (_Bool)_fetchIsExplicitContentAllowed;	// IMP=0x000000010001e978
+ (int)explicitRestrictionAlertTypeForTypeString:(id)arg1;	// IMP=0x000000010001e8a4
+ (void)presentExplicitRestrictionAlertIfNeededOfType:(int)arg1 presentationCompletion:(CDUnknownBlockType)arg2 actionCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001de88
+ (void)reloadSettings;	// IMP=0x000000010001dd4c
+ (_Bool)isExplicitContentAllowed;	// IMP=0x000000010001dc90

@end
