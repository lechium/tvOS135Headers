//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCCloudConfigurationWriter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000100067240
- (_Bool)saveCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100068278
- (_Bool)_validateDetails:(id)arg1 outReasonWhyInvalid:(id *)arg2;	// IMP=0x00000001000675d0
- (_Bool)_isCloudConfigurationAvailableInDEP;	// IMP=0x000000010006736c
- (_Bool)_isCloudConfigurationActuallyAvailable;	// IMP=0x0000000100067334
- (_Bool)_writeDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x00000001000672e8
- (_Bool)_isActivated;	// IMP=0x00000001000672e4
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;	// IMP=0x00000001000672ac

@end

