//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SWCSecurityGuard : NSObject
{
}

+ (id)new;	// IMP=0x000000010002ba24
+ (id)sharedSecurityGuard;	// IMP=0x000000010002b9e4
+ (id)_log;	// IMP=0x000000010002c59c
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x000000010002b4e8
- (id)JSONObjectWithSignedJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002b0c4
- (id)init;	// IMP=0x000000010002b094
- (_Bool)_verifyExtendedValidationOfTrust:(struct __SecTrust *)arg1;	// IMP=0x000000010002c454
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 allowingKeychains:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010002c008
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x000000010002ba9c
- (id)_init;	// IMP=0x000000010002ba68

@end

