//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceConnectionCommand-Protocol.h"

@class DKDiagnosticParameters, NSNumber, NSString;

@interface DADeviceConnectionStartTestCommand : NSObject <DADeviceConnectionCommand>
{
    NSNumber *_testID;	// 8 = 0x8
    DKDiagnosticParameters *_parameters;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100007724
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) DKDiagnosticParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSNumber *testID; // @synthesize testID=_testID;
@property(readonly, nonatomic) long long commandType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

