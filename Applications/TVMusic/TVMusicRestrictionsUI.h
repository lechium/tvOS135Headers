//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicRestrictionsUI : NSObject
{
}

+ (void)presentRatingRestrictionAlertIfNeededOfType:(unsigned long long)arg1 forRating:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000134bc
+ (long long)explicitRestrictionAlertTypeForTypeString:(id)arg1;	// IMP=0x00000001000133e8
+ (id)_defaultsKeyForAlertType:(long long)arg1;	// IMP=0x0000000100013310
+ (void)_didShowAlertOfType:(long long)arg1;	// IMP=0x0000000100013288
+ (long long)_numberOfTimesShownForAlertType:(long long)arg1;	// IMP=0x00000001000131fc
+ (void)_shouldPresentExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012dbc
+ (void)_presentExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000124f0
+ (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012388

@end

