//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep-Protocol.h"

@class NSString;

@interface SATVDisplayAssistantViewController : SATVStepViewController <SATVActionStep>
{
    CDUnknownBlockType completionHandler;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0000000100054a28
+ (id)stableKey;	// IMP=0x0000000100054a1c
- (void).cxx_destruct;	// IMP=0x0000000100054e00
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100054d80
- (void)viewDidLoad;	// IMP=0x0000000100054ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end
