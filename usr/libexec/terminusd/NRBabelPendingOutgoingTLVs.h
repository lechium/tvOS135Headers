//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NRBabelPendingOutgoingTLVs : NSObject
{
    _Bool _representsIHU;	// 8 = 0x8
    _Bool _representsUpdate;	// 9 = 0x9
    NSMutableArray *_tlvs;	// 16 = 0x10
    double _minTime;	// 24 = 0x18
    double _maxTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010006e19c
@property(nonatomic) _Bool representsUpdate; // @synthesize representsUpdate=_representsUpdate;
@property(nonatomic) _Bool representsIHU; // @synthesize representsIHU=_representsIHU;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(retain, nonatomic) NSMutableArray *tlvs; // @synthesize tlvs=_tlvs;
- (id)initWithInterval:(unsigned short)arg1;	// IMP=0x000000010006dfc8

@end

