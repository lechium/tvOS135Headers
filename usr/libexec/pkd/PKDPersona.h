//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PKDPersona : NSObject
{
    _Bool _enterprise;	// 8 = 0x8
    NSNumber *_personaID;	// 16 = 0x10
}

+ (_Bool)personasAreSupported;	// IMP=0x0000000100017580
- (void).cxx_destruct;	// IMP=0x000000010001768c
@property(readonly, getter=isEnterprise) _Bool enterprise; // @synthesize enterprise=_enterprise;
@property(readonly) NSNumber *personaID; // @synthesize personaID=_personaID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000175fc
- (_Bool)isEqualToPersona:(id)arg1;	// IMP=0x0000000100017598
- (unsigned long long)hash;	// IMP=0x0000000100017588
- (id)initWithPersonaID:(id)arg1 enterprise:(_Bool)arg2;	// IMP=0x0000000100017500

@end
