//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DKDiagnosticAttributes, DKDiagnosticParameters;

@protocol DATestQueueDelegate
- (void)executeTestWithTestAttributes:(DKDiagnosticAttributes *)arg1 parameters:(DKDiagnosticParameters *)arg2 completion:(void (^)(DKDiagnosticResult *, NSError *))arg3;
@end

