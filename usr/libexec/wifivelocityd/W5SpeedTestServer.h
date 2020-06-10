//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface W5SpeedTestServer : NSObject <NSCopying>
{
    float _latitude;	// 8 = 0x8
    float _longitude;	// 12 = 0xc
    NSString *_url;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
}

@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void)dealloc;	// IMP=0x0000000100006430
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000063a0
- (id)description;	// IMP=0x0000000100006320

@end
