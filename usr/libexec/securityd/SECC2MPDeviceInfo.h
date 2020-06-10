//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPDeviceInfo : PBCodable <NSCopying>
{
    NSMutableArray *_internalTestConfigs;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
    NSString *_processUuid;	// 24 = 0x18
    NSString *_processVersion;	// 32 = 0x20
    NSString *_productBuild;	// 40 = 0x28
    NSString *_productName;	// 48 = 0x30
    NSString *_productType;	// 56 = 0x38
    NSString *_productVersion;	// 64 = 0x40
    NSString *_userDefaultTestName;	// 72 = 0x48
    _Bool _isAppleInternal;	// 80 = 0x50
    struct {
        unsigned int isAppleInternal:1;
    } _has;	// 84 = 0x54
}

+ (Class)internalTestConfigType;	// IMP=0x000000010016cda0
- (void).cxx_destruct;	// IMP=0x000000010016c8c4
@property(retain, nonatomic) NSMutableArray *internalTestConfigs; // @synthesize internalTestConfigs=_internalTestConfigs;
@property(retain, nonatomic) NSString *userDefaultTestName; // @synthesize userDefaultTestName=_userDefaultTestName;
@property(retain, nonatomic) NSString *processUuid; // @synthesize processUuid=_processUuid;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010016c508
- (unsigned long long)hash;	// IMP=0x000000010016c3d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016c188
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016bea4
- (void)copyTo:(id)arg1;	// IMP=0x000000010016bca4
- (void)writeTo:(id)arg1;	// IMP=0x000000010016ba70
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010016ba68
- (id)dictionaryRepresentation;	// IMP=0x000000010016b6fc
- (id)description;	// IMP=0x000000010016b648
- (id)internalTestConfigAtIndex:(unsigned long long)arg1;	// IMP=0x000000010016b630
- (unsigned long long)internalTestConfigsCount;	// IMP=0x000000010016b618
- (void)addInternalTestConfig:(id)arg1;	// IMP=0x000000010016b5a4
- (void)clearInternalTestConfigs;	// IMP=0x000000010016b58c
@property(readonly, nonatomic) _Bool hasUserDefaultTestName;
@property(readonly, nonatomic) _Bool hasProcessUuid;
@property(readonly, nonatomic) _Bool hasProcessVersion;
@property(readonly, nonatomic) _Bool hasProcessName;
@property(nonatomic) _Bool hasIsAppleInternal;
@property(readonly, nonatomic) _Bool hasProductBuild;
@property(readonly, nonatomic) _Bool hasProductVersion;
@property(readonly, nonatomic) _Bool hasProductType;
@property(readonly, nonatomic) _Bool hasProductName;

@end

