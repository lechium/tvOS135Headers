//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBIssueDataReporter : NSObject
{
}

- (void)_uploadSysdiagnoseAtPath:(id)arg1 toURL:(id)arg2 deleteAfterUpload:(_Bool)arg3;	// IMP=0x000000010010f144
- (id)_latestSysdiagnoseFilePath;	// IMP=0x000000010010e534
- (void)reportIssueDataAtPath:(id)arg1;	// IMP=0x000000010010de34
- (void)_reportLatestIssueDataWithRemainingAttempts:(long long)arg1;	// IMP=0x000000010010db4c
- (void)reportLatestIssueData;	// IMP=0x000000010010db10

@end
