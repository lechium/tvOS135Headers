//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourResolverDelegate-Protocol.h"

@class NSNumber, NSString, SDBonjourResolver;
@protocol SDNetworkResolverDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkResolver : NSObject <SDBonjourResolverDelegate>
{
    struct __SFNode *_node;	// 8 = 0x8
    SDBonjourResolver *_resolver;	// 16 = 0x10
    void *_session;	// 24 = 0x18
    NSNumber *_flags;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    id <SDNetworkResolverDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000c367c
@property __weak id <SDNetworkResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void)stop;	// IMP=0x00000001000c35d8
- (int)start;	// IMP=0x00000001000c32f0
- (void)mount;	// IMP=0x00000001000c32ec
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x00000001000c3034
- (void)mountDiskImageAsync;	// IMP=0x00000001000c3030
- (void)notifyClientAboutResolve:(int)arg1;	// IMP=0x00000001000c2efc
- (void)dealloc;	// IMP=0x00000001000c2eb4
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x00000001000c2e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

