//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDKManagedDeviceDelegate-Protocol.h"

@class NSError, NSMutableArray, NSNumber, NSString;

@interface MSDViewServiceModel : NSObject <MSDKManagedDeviceDelegate>
{
    NSString *_errorMessage;	// 8 = 0x8
    NSError *_errorToReport;	// 16 = 0x10
    NSNumber *_progress;	// 24 = 0x18
    NSMutableArray *_errors;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100004804
- (void).cxx_destruct;	// IMP=0x0000000100004fc4
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain) NSNumber *progress; // @synthesize progress=_progress;
@property(retain) NSError *errorToReport; // @synthesize errorToReport=_errorToReport;
@property(retain) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void)operationFailed:(id)arg1;	// IMP=0x0000000100004edc
- (void)operationCompleted;	// IMP=0x0000000100004e60
- (void)didReceiveProgress:(long long)arg1;	// IMP=0x0000000100004d60
- (void)didReceiveError:(id)arg1;	// IMP=0x0000000100004cbc
- (id)errorMessageFromErrors;	// IMP=0x0000000100004988
- (id)init;	// IMP=0x0000000100004870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
