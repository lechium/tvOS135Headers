//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RPServer;

@interface RPXPCMatchingEntry : NSObject
{
    _Bool _appSignIn;	// 8 = 0x8
    _Bool _state;	// 9 = 0x9
    NSDictionary *_event;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    RPServer *_server;	// 32 = 0x20
    unsigned long long _token;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002b0ec
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
@property(nonatomic) _Bool state; // @synthesize state=_state;
@property(retain, nonatomic) RPServer *server; // @synthesize server=_server;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *event; // @synthesize event=_event;
@property(nonatomic) _Bool appSignIn; // @synthesize appSignIn=_appSignIn;

@end

