//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DKDiagnosticAttributes, DKDiagnosticParameters;

@protocol DATestQueueDelegate
- (void)executeTestWithTestAttributes:(DKDiagnosticAttributes *)arg1 parameters:(DKDiagnosticParameters *)arg2 completion:(void (^)(DKDiagnosticResult *, NSError *))arg3;
@end
