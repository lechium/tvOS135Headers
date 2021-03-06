/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen; 
@property (assign,nonatomic) BOOL hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)numberOfTabsOpen;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setHasNumberOfTabsOpen:(BOOL)arg1 ;
-(BOOL)hasNumberOfTabsOpen;
-(unsigned)currentTabIndex;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(void)setHasCurrentTabIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentTabIndex;
@end

