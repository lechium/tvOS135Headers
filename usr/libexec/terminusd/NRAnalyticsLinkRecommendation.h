//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalytics.h"

@interface NRAnalyticsLinkRecommendation : NRAnalytics
{
    unsigned long long _btNotRecommendedStart;	// 16 = 0x10
    unsigned long long _btNotRecommendedEnd;	// 24 = 0x18
    unsigned long long _cmpWiFiNotRecommendedStart;	// 32 = 0x20
    unsigned long long _cmpWiFiNotRecommendedEnd;	// 40 = 0x28
}

@property(nonatomic) unsigned long long cmpWiFiNotRecommendedEnd; // @synthesize cmpWiFiNotRecommendedEnd=_cmpWiFiNotRecommendedEnd;
@property(nonatomic) unsigned long long cmpWiFiNotRecommendedStart; // @synthesize cmpWiFiNotRecommendedStart=_cmpWiFiNotRecommendedStart;
@property(nonatomic) unsigned long long btNotRecommendedEnd; // @synthesize btNotRecommendedEnd=_btNotRecommendedEnd;
@property(nonatomic) unsigned long long btNotRecommendedStart; // @synthesize btNotRecommendedStart=_btNotRecommendedStart;
- (void)submit;	// IMP=0x00000001000991b0

@end

