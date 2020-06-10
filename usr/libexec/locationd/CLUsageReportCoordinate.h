//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface CLUsageReportCoordinate : NSObject <NSSecureCoding>
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001004822f8
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100482378
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100482300
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0000000100482278

@end
