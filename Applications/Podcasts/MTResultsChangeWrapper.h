//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol NSCopying;

@interface MTResultsChangeWrapper : NSObject <NSCopying>
{
    NSObject<NSCopying> *_object;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100167810
@property(retain, nonatomic) NSObject<NSCopying> *object; // @synthesize object=_object;
- (unsigned long long)hash;	// IMP=0x00000001001677b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001676d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100167668
- (id)initWithObject:(id)arg1;	// IMP=0x00000001001675f4

@end

