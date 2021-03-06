//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DAUserInterruptAlert, NSLock;

@interface DAUserInterruptAlertFactory : NSObject
{
    NSLock *_alertVisibleLock;	// 8 = 0x8
    DAUserInterruptAlert *_visibleAlert;	// 16 = 0x10
}

+ (void)reset;	// IMP=0x000000010000bfa8
+ (void)activateAlertForSuiteName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bf20
+ (id)sharedInstance;	// IMP=0x000000010000beb4
- (void).cxx_destruct;	// IMP=0x000000010000c2a4
@property(retain, nonatomic) DAUserInterruptAlert *visibleAlert; // @synthesize visibleAlert=_visibleAlert;
@property(retain, nonatomic) NSLock *alertVisibleLock; // @synthesize alertVisibleLock=_alertVisibleLock;
- (void)activateAlertForSuiteName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c0b8
- (id)init;	// IMP=0x000000010000c054

@end

