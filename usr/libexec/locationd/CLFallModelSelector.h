//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLFallModelSelector : NSObject
{
    NSMutableDictionary *fSelectionFeatures;	// 8 = 0x8
    struct FallModel fTripFallModel;	// 16 = 0x10
    struct FallModel fSlipFallModel;	// 812 = 0x32c
    struct FallModel fOtherFallModel;	// 1608 = 0x648
    struct FallThresholds {
        float fImpactMaxAccelNormAlertThreshold;
        float fImpactMaxAccelNormLoggingStatsThreshold;
        float fImpactMaxAccelNormLoggingHeartRateThreshold;
        float fImpactMaxAccelNormLoggingHighResolutionSensorDataThreshold;
        float fTripFallPosteriorRatioDetectionThreshold;
        float fSlipFallPosteriorRatioDetectionThreshold;
        float fOtherFallPosteriorRatioDetectionThreshold;
        float fTripNearFallPosteriorRatioDetectionThreshold;
        float fSlipNearFallPosteriorRatioDetectionThreshold;
        float fOtherNearFallPosteriorRatioDetectionThreshold;
        int fTotalLongLieThreshold;
        int fConsecutiveLongLieThreshold;
    } fThresholds;	// 2404 = 0x964
}

- (id).cxx_construct;	// IMP=0x00000001000ffba4
- (_Bool)fillFallThresholds:(struct FallThresholds *)arg1;	// IMP=0x00000001000ffb5c
- (_Bool)fillOtherFallModel:(struct FallModel *)arg1;	// IMP=0x00000001000ffa0c
- (_Bool)fillSlipFallModel:(struct FallModel *)arg1;	// IMP=0x00000001000ff8bc
- (_Bool)fillTripFallModel:(struct FallModel *)arg1;	// IMP=0x00000001000ff774
- (_Bool)selectModels;	// IMP=0x00000001000fe3e8
- (_Bool)setSelectionFeatureValue:(id)arg1 value:(id)arg2;	// IMP=0x00000001000fe3b8
- (void)dealloc;	// IMP=0x00000001000fe370
- (id)init;	// IMP=0x00000001000fe318

@end

