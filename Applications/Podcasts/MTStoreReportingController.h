//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@interface MTStoreReportingController : MTSingleton
{
}

+ (id)reportingStringForPlayReason:(unsigned long long)arg1;	// IMP=0x00000001000244b0
- (id)pageTypeForReportType:(int)arg1;	// IMP=0x0000000100024444
- (void)recordMetricsEventForType:(int)arg1 withData:(id)arg2;	// IMP=0x00000001000241d8
- (id)_dictionaryForPodcastUuid:(id)arg1;	// IMP=0x0000000100023f84
- (void)reportBrowse:(id)arg1;	// IMP=0x0000000100023f24
- (void)reportPlaybackFromStore:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000100023ec4
- (void)reportWithType:(int)arg1 userInfo:(id)arg2 location:(id)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000100023428

@end

