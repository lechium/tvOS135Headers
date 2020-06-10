//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OctagonFlagString;

__attribute__((visibility("hidden")))
@interface OctagonPendingFlag : NSObject
{
    NSString<OctagonFlagString> *_flag;	// 8 = 0x8
    NSDate *_fireTime;	// 16 = 0x10
    unsigned long long _conditions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b4b94
@property(readonly) unsigned long long conditions; // @synthesize conditions=_conditions;
@property(readonly) NSDate *fireTime; // @synthesize fireTime=_fireTime;
@property(readonly) NSString<OctagonFlagString> *flag; // @synthesize flag=_flag;
- (id)description;	// IMP=0x00000001000b4a48
- (id)initWithFlag:(id)arg1 conditions:(unsigned long long)arg2;	// IMP=0x00000001000b49bc
- (id)initWithFlag:(id)arg1 delayInSeconds:(double)arg2;	// IMP=0x00000001000b4904

@end
