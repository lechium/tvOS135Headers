//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ALSLocationResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;	// 8 = 0x8
    NSMutableArray *_cellTowers;	// 16 = 0x10
    NSMutableArray *_lteCellTowers;	// 24 = 0x18
    NSMutableArray *_scdmaCellTowers;	// 32 = 0x20
    NSMutableArray *_wirelessAPs;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (unsigned long long)hash;	// IMP=0x0000000100527414
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001005272e4
- (void)copyTo:(id)arg1;	// IMP=0x000000010052704c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100526b30
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100526b28
- (id)dictionaryRepresentation;	// IMP=0x000000010052616c
- (id)description;	// IMP=0x00000001005260ec
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005260d4
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x00000001005260bc
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x0000000100526068
- (void)clearScdmaCellTowers;	// IMP=0x0000000100526050
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100526038
- (unsigned long long)lteCellTowersCount;	// IMP=0x0000000100526020
- (void)addLteCellTower:(id)arg1;	// IMP=0x0000000100525fcc
- (void)clearLteCellTowers;	// IMP=0x0000000100525fb4
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100525f9c
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x0000000100525f84
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x0000000100525f30
- (void)clearCdmaCellTowers;	// IMP=0x0000000100525f18
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100525f00
- (unsigned long long)wirelessAPsCount;	// IMP=0x0000000100525ee8
- (void)addWirelessAP:(id)arg1;	// IMP=0x0000000100525e94
- (void)clearWirelessAPs;	// IMP=0x0000000100525e7c
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100525e64
- (unsigned long long)cellTowersCount;	// IMP=0x0000000100525e4c
- (void)addCellTower:(id)arg1;	// IMP=0x0000000100525df8
- (void)clearCellTowers;	// IMP=0x0000000100525de0
- (void)dealloc;	// IMP=0x0000000100525d40

@end

