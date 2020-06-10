//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface SDManagedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSDictionary *_servers;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x000000010015a808
- (void).cxx_destruct;	// IMP=0x000000010015a9e0
- (void)stop;	// IMP=0x000000010015a9bc
- (void)start;	// IMP=0x000000010015a944
- (void)buildNodesAndNotify;	// IMP=0x000000010015a940
@property(readonly, copy) NSArray *nodes;
- (void)setServers:(id)arg1;	// IMP=0x000000010015a8d0
- (id)init;	// IMP=0x000000010015a874

@end
