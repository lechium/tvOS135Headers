//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep-Protocol.h"

@class NSString;

@interface SATVDisplayModeRegionViewController : SATVStepViewController <SATVActionStep>
{
    CDUnknownBlockType completionHandler;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x000000010001d254
+ (id)_localeDisplayMode;	// IMP=0x000000010001d128
+ (double)_localeRefreshRate;	// IMP=0x000000010001d0b0
+ (id)stableKey;	// IMP=0x000000010001d0a4
- (void).cxx_destruct;	// IMP=0x000000010001d62c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d5ac
- (void)viewDidLoad;	// IMP=0x000000010001d35c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

