//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAStrongDeviceIdentity : NSObject
{
    struct __SecKey *_deviceIdentityKey;	// 8 = 0x8
}

@property(nonatomic) struct __SecKey *deviceIdentityKey; // @synthesize deviceIdentityKey=_deviceIdentityKey;
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016ca8
- (id)SHA256ForFileHandle:(id)arg1;	// IMP=0x00000001000169e4
- (id)SHA256ForData:(id)arg1;	// IMP=0x0000000100016908
- (id)signFile:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001665c
- (id)signPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016498
- (void)generateAuthInfoWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000160f4
- (void)dealloc;	// IMP=0x00000001000160a8
- (void)purgeSecurityKey;	// IMP=0x000000010001604c

@end

