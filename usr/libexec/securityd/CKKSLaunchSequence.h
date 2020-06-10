//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBlockOperation, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKKSLaunchSequence : NSObject
{
    _Bool _firstLaunch;	// 8 = 0x8
    _Bool _launched;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSMutableDictionary *_events;	// 24 = 0x18
    NSMutableDictionary *_attributes;	// 32 = 0x20
    NSBlockOperation *_launchOperation;	// 40 = 0x28
    NSMutableDictionary *_dependantLaunches;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001823e0
@property(retain) NSMutableDictionary *dependantLaunches; // @synthesize dependantLaunches=_dependantLaunches;
@property(retain) NSBlockOperation *launchOperation; // @synthesize launchOperation=_launchOperation;
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSMutableDictionary *events; // @synthesize events=_events;
@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool launched; // @synthesize launched=_launched;
- (id)eventsByTime;	// IMP=0x000000010018202c
- (id)eventsRelativeTime;	// IMP=0x0000000100181e48
- (void)launch;	// IMP=0x0000000100181c8c
- (void)reportMetric;	// IMP=0x00000001001819bc
- (void)addEvent:(id)arg1;	// IMP=0x0000000100181814
- (void)addAttribute:(id)arg1 value:(id)arg2;	// IMP=0x00000001001816c0
- (void)addDependantLaunch:(id)arg1 child:(id)arg2;	// IMP=0x0000000100181544
@property _Bool firstLaunch;
- (id)initWithRocketName:(id)arg1;	// IMP=0x000000010018136c

@end
