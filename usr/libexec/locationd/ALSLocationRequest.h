//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface ALSLocationRequest : PBRequest
{
    NSString *_appBundleId;	// 8 = 0x8
    NSMutableArray *_cdmaCellTowers;	// 16 = 0x10
    NSMutableArray *_cdmaEvdoTowers;	// 24 = 0x18
    NSMutableArray *_cellTowers;	// 32 = 0x20
    NSMutableArray *_lteCellTowers;	// 40 = 0x28
    int _numberOfSurroundingCdmaCells;	// 48 = 0x30
    int _numberOfSurroundingCdmaEvdoCells;	// 52 = 0x34
    int _numberOfSurroundingCells;	// 56 = 0x38
    int _numberOfSurroundingLteCells;	// 60 = 0x3c
    int _numberOfSurroundingScdmaCells;	// 64 = 0x40
    int _numberOfSurroundingWifis;	// 68 = 0x44
    NSMutableArray *_scdmaCellTowers;	// 72 = 0x48
    NSMutableArray *_wirelessAPs;	// 80 = 0x50
    struct {
        unsigned int numberOfSurroundingCdmaCells:1;
        unsigned int numberOfSurroundingCdmaEvdoCells:1;
        unsigned int numberOfSurroundingCells:1;
        unsigned int numberOfSurroundingLteCells:1;
        unsigned int numberOfSurroundingScdmaCells:1;
        unsigned int numberOfSurroundingWifis:1;
    } _has;	// 88 = 0x58
}

@property(nonatomic) int numberOfSurroundingScdmaCells; // @synthesize numberOfSurroundingScdmaCells=_numberOfSurroundingScdmaCells;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(nonatomic) int numberOfSurroundingLteCells; // @synthesize numberOfSurroundingLteCells=_numberOfSurroundingLteCells;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(nonatomic) int numberOfSurroundingCdmaEvdoCells; // @synthesize numberOfSurroundingCdmaEvdoCells=_numberOfSurroundingCdmaEvdoCells;
@property(nonatomic) int numberOfSurroundingCdmaCells; // @synthesize numberOfSurroundingCdmaCells=_numberOfSurroundingCdmaCells;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) int numberOfSurroundingCells; // @synthesize numberOfSurroundingCells=_numberOfSurroundingCells;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (unsigned long long)hash;	// IMP=0x0000000100525a60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001005257c0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100525314
- (Class)responseClass;	// IMP=0x0000000100525308
- (unsigned int)requestTypeCode;	// IMP=0x0000000100525300
- (void)writeTo:(id)arg1;	// IMP=0x0000000100524bac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100524ba4
- (id)dictionaryRepresentation;	// IMP=0x0000000100523a54
- (id)description;	// IMP=0x00000001005239d4
@property(nonatomic) _Bool hasNumberOfSurroundingScdmaCells;
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100523968
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x0000000100523950
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x00000001005238fc
- (void)clearScdmaCellTowers;	// IMP=0x00000001005238e4
@property(nonatomic) _Bool hasNumberOfSurroundingLteCells;
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100523878
- (unsigned long long)lteCellTowersCount;	// IMP=0x0000000100523860
- (void)addLteCellTower:(id)arg1;	// IMP=0x000000010052380c
- (void)clearLteCellTowers;	// IMP=0x00000001005237f4
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaEvdoCells;
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaCells;
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100523734
- (unsigned long long)cdmaEvdoTowersCount;	// IMP=0x000000010052371c
- (void)addCdmaEvdoTower:(id)arg1;	// IMP=0x00000001005236c8
- (void)clearCdmaEvdoTowers;	// IMP=0x00000001005236b0
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100523698
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x0000000100523680
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x000000010052362c
- (void)clearCdmaCellTowers;	// IMP=0x0000000100523614
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNumberOfSurroundingCells;
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x000000010052353c
- (unsigned long long)wirelessAPsCount;	// IMP=0x0000000100523524
- (void)addWirelessAP:(id)arg1;	// IMP=0x00000001005234d0
- (void)clearWirelessAPs;	// IMP=0x00000001005234b8
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005234a0
- (unsigned long long)cellTowersCount;	// IMP=0x0000000100523488
- (void)addCellTower:(id)arg1;	// IMP=0x0000000100523434
- (void)clearCellTowers;	// IMP=0x000000010052341c
- (void)dealloc;	// IMP=0x0000000100523354

@end
