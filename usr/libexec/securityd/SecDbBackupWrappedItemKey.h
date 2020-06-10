//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupWrappedItemKey : NSObject <NSSecureCoding>
{
    NSData *_wrappedKey;	// 8 = 0x8
    NSData *_baguuid;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000a1c14
- (void).cxx_destruct;	// IMP=0x00000001000a1be4
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a1ad8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000a1a20

@end

