//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKBundle, PKDServer;
@protocol OS_xpc_object;

@interface PKDXpcClient : NSObject
{
    _Bool _acceptWork;	// 8 = 0x8
    unsigned int _requestCount;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    PKDServer *_server;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_clientid;	// 40 = 0x28
    PKBundle *_bundle;	// 48 = 0x30
    struct __SecTask *__task;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001eb78
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
@property struct __SecTask *_task; // @synthesize _task=__task;
@property _Bool acceptWork; // @synthesize acceptWork=_acceptWork;
@property(retain) PKBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly) NSString *clientid; // @synthesize clientid=_clientid;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) PKDServer *server; // @synthesize server=_server;
@property __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x000000010001e9c4
- (_Bool)isSandboxed;	// IMP=0x000000010001e95c
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000010001e8c8
- (id)entitlementValueForKey:(id)arg1;	// IMP=0x000000010001e814
@property(readonly) int pid;
- (void)dead;	// IMP=0x000000010001e734
- (void)dying;	// IMP=0x000000010001e6e0
- (void)dealloc;	// IMP=0x000000010001e694
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x000000010001df3c

@end

