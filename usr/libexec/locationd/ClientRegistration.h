//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CLMotionAlarmNotifierClientProtocol;

@interface ClientRegistration : NSObject
{
    id <CLMotionAlarmNotifierClientProtocol> _adapter;	// 8 = 0x8
    struct Name _name;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000001002fe25c
- (void).cxx_destruct;	// IMP=0x00000001002fe1e8
@property(nonatomic) struct Name name; // @synthesize name=_name;
@property(retain, nonatomic) id <CLMotionAlarmNotifierClientProtocol> adapter; // @synthesize adapter=_adapter;
- (void)dealloc;	// IMP=0x00000001002fe10c

@end

