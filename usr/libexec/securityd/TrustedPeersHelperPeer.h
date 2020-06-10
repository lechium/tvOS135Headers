//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface TrustedPeersHelperPeer : NSObject <NSSecureCoding>
{
    NSString *_peerID;	// 8 = 0x8
    NSData *_signingSPKI;	// 16 = 0x10
    NSData *_encryptionSPKI;	// 24 = 0x18
    NSSet *_viewList;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100166c74
- (void).cxx_destruct;	// IMP=0x0000000100166c2c
@property(retain) NSSet *viewList; // @synthesize viewList=_viewList;
@property(retain) NSData *encryptionSPKI; // @synthesize encryptionSPKI=_encryptionSPKI;
@property(retain) NSData *signingSPKI; // @synthesize signingSPKI=_signingSPKI;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100166aac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001668ac
- (id)description;	// IMP=0x00000001001667a8
- (id)initWithPeerID:(id)arg1 signingSPKI:(id)arg2 encryptionSPKI:(id)arg3 viewList:(id)arg4;	// IMP=0x00000001001666ac

@end

