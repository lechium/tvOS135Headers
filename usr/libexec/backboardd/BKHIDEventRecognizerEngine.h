//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BKHIDEventRecognizerEngine : NSObject
{
    long long _runtimePhase;	// 8 = 0x8
    NSMutableArray *_recognizers;	// 16 = 0x10
    NSMutableArray *_blocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005f06c
@property(retain, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSMutableArray *recognizers; // @synthesize recognizers=_recognizers;
@property(nonatomic) long long runtimePhase; // @synthesize runtimePhase=_runtimePhase;
- (long long)processEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010005eeb4
- (void)removeRecognizer:(id)arg1;	// IMP=0x000000010005ee58
- (void)addRecognizer:(id)arg1 recognitionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ec28
- (id)init;	// IMP=0x000000010005ebec

@end
