//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SecuritydXPCServer : NSObject
{
    struct SecurityClient _client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100012a14
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x0000000100012980
- (_Bool)clientHasBooleanEntitlement:(id)arg1;	// IMP=0x0000000100012974
- (id)initWithSecurityClient:(struct SecurityClient *)arg1;	// IMP=0x0000000100012884
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000127a4
- (void)secItemVerifyBackupIntegrity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012018
- (void)secKeychainDeleteMultiuser:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011df0
- (void)secItemDigest:(id)arg1 accessGroup:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001000119c0
- (void)findItemPersistentRefByUUID:(id)arg1 extraLoggingString:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x000000010001162c
- (void)secItemFetchCurrentItemAcrossAllDevices:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00000001000112ac
- (void)secItemSetCurrentItemAcrossAllDevices:(id)arg1 newCurrentItemHash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 oldCurrentItemReference:(id)arg6 oldCurrentItemHash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x0000000100010e5c
- (void)SecItemAddAndNotifyOnSync:(id)arg1 syncCallback:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010a38

@end

