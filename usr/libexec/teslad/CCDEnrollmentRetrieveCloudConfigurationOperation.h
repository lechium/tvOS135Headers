//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDEnrollmentOperation.h"

@interface CCDEnrollmentRetrieveCloudConfigurationOperation : CCDEnrollmentOperation
{
}

- (void)_setLockdownCloudConfigAvailableKeyIfNeededWithError:(id)arg1;	// IMP=0x00000001000038a0
- (void)_setEnrolledDeviceRequirementsIfNeededForCloudConfigurationDictionary:(id)arg1;	// IMP=0x00000001000036b4
- (_Bool)_convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id *)arg2;	// IMP=0x00000001000035e8
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100003094
- (id)errorForStatusCode:(long long)arg1 responseData:(id)arg2;	// IMP=0x0000000100002f84

@end
