//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x0000000100061f6c
- (void).cxx_destruct;	// IMP=0x0000000100062628
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x00000001000624f0
- (void)_retain;	// IMP=0x00000001000623ac
- (void)unpark;	// IMP=0x00000001000622ac
- (void)park;	// IMP=0x00000001000621ac
- (void)stayAliveThroughHereAtLeast;	// IMP=0x00000001000621a8
- (void)dealloc;	// IMP=0x0000000100062100
- (id)initForOperation:(id)arg1;	// IMP=0x0000000100062014

@end
