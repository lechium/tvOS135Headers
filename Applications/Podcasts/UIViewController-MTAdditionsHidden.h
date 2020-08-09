//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IMMetricsDataSource-Protocol.h"

@class NSDictionary, NSString;
@protocol IMMetricsDataSource;

@interface UIViewController (MTAdditionsHidden) <IMMetricsDataSource>
+ (id)mt_rootViewController;	// IMP=0x00000001000fd468
+ (void)_rewriteOnce;	// IMP=0x00000001001a3ce0
+ (void)swizzleMethodsForMetrics;	// IMP=0x00000001001a3bc8
- (_Bool)hiddenIfEmpty;	// IMP=0x0000000100012174
@property(nonatomic) long long layoutDirection;
- (id)mt_topViewControllerExcludingPopovers;	// IMP=0x00000001000fd3ac
- (id)mt_topViewController;	// IMP=0x00000001000fd320
- (_Bool)mt_isVisible;	// IMP=0x00000001000fd2a4
- (void)simulateMemoryWarning;	// IMP=0x00000001000fd2a0
- (_Bool)isADescendantOfParentViewController:(id)arg1;	// IMP=0x00000001000fd1cc
- (void)visitChildenViewControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fd070
- (id)recursiveDescription;	// IMP=0x00000001000fd004
- (id)_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;	// IMP=0x00000001000fcdf4
@property(nonatomic) id <IMMetricsDataSource> metricDataSource;
@property(retain, nonatomic) NSDictionary *metricsAdditionalData;
@property(retain, nonatomic) id metricsContentIdentifier;
@property(retain, nonatomic) NSString *metricsName;
@property(nonatomic) _Bool metricsEnabled;
- (void)setViewWillAppearTime:(double)arg1;	// IMP=0x00000001001a4470
- (double)viewWillAppearTime;	// IMP=0x00000001001a4418
- (_Bool)isUIKitClass;	// IMP=0x00000001001a426c
- (void)recordViewDidAppearEvent;	// IMP=0x00000001001a40c0
- (_Bool)isVerticallyRegular;	// IMP=0x00000001001d49b4
- (_Bool)isVerticallyCompact;	// IMP=0x00000001001d4964
- (_Bool)isVerticallySpecified;	// IMP=0x00000001001d4914
- (_Bool)isHorizontallyRegular;	// IMP=0x00000001001d48c4
- (_Bool)isHorizontallyCompact;	// IMP=0x00000001001d4874
- (_Bool)isHorizontallySpecified;	// IMP=0x00000001001d4824
- (id)recursiveDescription;	// IMP=0x00000001001d4368
- (long long)preferredInterfaceOrientationGivenOrientation:(long long)arg1;	// IMP=0x00000001001d4298
- (_Bool)isSupportedInterfaceOrientation:(long long)arg1;	// IMP=0x00000001001d428c
- (long long)IMDeviceOrientation;	// IMP=0x00000001001d4218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

