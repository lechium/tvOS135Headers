//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class NSData, NSURLStorageURLCacheDB, NSXPCConnection;

@interface NSURLStorageTaskManager : NSOperationQueue
{
    long long _sandboxExtensionHandle;	// 8 = 0x8
    NSURLStorageURLCacheDB *_persistentDB;	// 16 = 0x10
    NSXPCConnection *_xpcConnectionToRemoteEndpoint;	// 24 = 0x18
    NSData *_sandboxExtensionData;	// 32 = 0x20
    CDStruct_4c969caf _auditToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100005294
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(retain) NSData *sandboxExtensionData; // @synthesize sandboxExtensionData=_sandboxExtensionData;
@property(retain) NSXPCConnection *xpcConnectionToRemoteEndpoint; // @synthesize xpcConnectionToRemoteEndpoint=_xpcConnectionToRemoteEndpoint;
@property(retain) NSURLStorageURLCacheDB *persistentDB; // @synthesize persistentDB=_persistentDB;
- (void)updateFileSystemUsageCounters;	// IMP=0x0000000100005168
- (void)dealloc;	// IMP=0x00000001000050a4
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 auditToken:(CDStruct_4c969caf)arg4;	// IMP=0x0000000100004ea8

@end

