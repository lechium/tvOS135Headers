//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, UIViewController;

@interface SATVStepContext : NSObject
{
    _Bool _isRunningInternalBuild;	// 8 = 0x8
    _Bool _isRunningCustomerBuild;	// 9 = 0x9
    long long _navigationMode;	// 16 = 0x10
    NSString *_currentOSVersion;	// 24 = 0x18
    NSString *_previousOSVersion;	// 32 = 0x20
    UIViewController *_stepViewController;	// 40 = 0x28
    NSUserDefaults *_standardUserDefaults;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008e344
@property(retain, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(retain, nonatomic) UIViewController *stepViewController; // @synthesize stepViewController=_stepViewController;
@property(copy, nonatomic) NSString *previousOSVersion; // @synthesize previousOSVersion=_previousOSVersion;
@property(copy, nonatomic) NSString *currentOSVersion; // @synthesize currentOSVersion=_currentOSVersion;
@property(nonatomic) _Bool isRunningCustomerBuild; // @synthesize isRunningCustomerBuild=_isRunningCustomerBuild;
@property(nonatomic) _Bool isRunningInternalBuild; // @synthesize isRunningInternalBuild=_isRunningInternalBuild;
@property(nonatomic) long long navigationMode; // @synthesize navigationMode=_navigationMode;
- (void)_configureDefaultProperties;	// IMP=0x000000010008e158
- (_Bool)isNavigationFlowForward;	// IMP=0x000000010008e134
- (_Bool)isUpgrade;	// IMP=0x000000010008e120
- (id)description;	// IMP=0x000000010008df1c
- (id)init;	// IMP=0x000000010008de98

@end

