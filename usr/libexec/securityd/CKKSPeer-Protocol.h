//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, _SFECPublicKey;
@protocol CKKSPeer;

@protocol CKKSPeer <NSObject>
@property(readonly) _SFECPublicKey *publicSigningKey;
@property(readonly) _SFECPublicKey *publicEncryptionKey;
@property(readonly) NSString *peerID;
- (_Bool)matchesPeer:(id <CKKSPeer>)arg1;
@end

