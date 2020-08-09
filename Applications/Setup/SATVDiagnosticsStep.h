//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, SATVDiagnosticsController;
@protocol SATVStepDelegate;

@interface SATVDiagnosticsStep : NSObject <SATVBaseStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVDiagnosticsController *_diagnosticsController;	// 16 = 0x10
}

+ (id)stepPresentationRecordKey;	// IMP=0x0000000100047cc4
+ (void)initialize;	// IMP=0x0000000100047c60
- (void).cxx_destruct;	// IMP=0x00000001000481b8
@property(retain, nonatomic) SATVDiagnosticsController *diagnosticsController; // @synthesize diagnosticsController=_diagnosticsController;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_sendStepCompletionNotification;	// IMP=0x0000000100048110
- (void)_presentDiagnosticsController;	// IMP=0x0000000100047ee8
- (void)autoAdvance;	// IMP=0x0000000100047e54
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100047cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
