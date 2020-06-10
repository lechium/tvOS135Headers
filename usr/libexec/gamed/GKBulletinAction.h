//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface GKBulletinAction : NSObject <NSCoding, NSSecureCoding>
{
    _Bool _isDestructive;	// 8 = 0x8
    _Bool _inAlertView;	// 9 = 0x9
    _Bool _inBannerView;	// 10 = 0xa
    long long _type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_info;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008014c
@property _Bool inBannerView; // @synthesize inBannerView=_inBannerView;
@property _Bool inAlertView; // @synthesize inAlertView=_inAlertView;
@property _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(retain) NSString *info; // @synthesize info=_info;
@property(retain) NSString *title; // @synthesize title=_title;
@property long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000001000803dc
@property(readonly) NSDictionary *actionDictionary;
- (void)dealloc;	// IMP=0x00000001000801c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100080154
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007feac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007fc28
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010007fba0
- (id)init;	// IMP=0x000000010007fb60

@end

