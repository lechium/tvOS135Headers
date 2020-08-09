//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString;

@interface PBSystemOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _animated;	// 16 = 0x10
    NSDictionary *_clientOptions;	// 24 = 0x18
    _Bool _clientInitiated;	// 32 = 0x20
}

+ (id)dismissalRequestForAllSessions;	// IMP=0x0000000100150c00
+ (id)dismissalRequestForSession:(id)arg1;	// IMP=0x0000000100150b44
- (void).cxx_destruct;	// IMP=0x0000000100150efc
- (_Bool)_clientInitiated;	// IMP=0x0000000100150edc
@property(readonly, copy, nonatomic) NSDictionary *clientOptions;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100150e30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100150e10
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000100150c4c

@end
