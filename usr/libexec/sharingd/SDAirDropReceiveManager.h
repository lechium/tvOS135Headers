//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAirDropAlertManagerDelegate-Protocol.h"
#import "SDAirDropListenerDelegate-Protocol.h"
#import "SDNetworkOperationDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SDAirDropClassroomTransferManager, SDAirDropListener, SDAirDropTransferManager;

__attribute__((visibility("hidden")))
@interface SDAirDropReceiveManager : NSObject <SDAirDropListenerDelegate, SDNetworkOperationDelegate, SDAirDropAlertManagerDelegate>
{
    SDAirDropListener *_listener;	// 8 = 0x8
    NSMutableDictionary *_transferIdentifierToNetworkOperation;	// 16 = 0x10
    SDAirDropTransferManager *_transferManager;	// 24 = 0x18
    SDAirDropClassroomTransferManager *_classroomTransferManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000b5ccc
@property(readonly, copy) NSString *description;
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x00000001000b5bd0
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x00000001000b5ac8
- (void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000b57a4
- (void)listener:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x00000001000b5744
- (void)listener:(id)arg1 informationDidChange:(id)arg2;	// IMP=0x00000001000b5740
- (void)listener:(id)arg1 didReceiveNewRequest:(id)arg2;	// IMP=0x00000001000b5674
- (void)stop;	// IMP=0x00000001000b55fc
- (void)start;	// IMP=0x00000001000b554c
- (id)init;	// IMP=0x00000001000b549c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

