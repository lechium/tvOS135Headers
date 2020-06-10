/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWADiagnosisActionAssociationDifferences;

@interface AWDWiFiDPSEpilogue : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _afterRecommendedAction;
	int _beforeAction;
	AWDWADiagnosisActionAssociationDifferences* _changes;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeforeAction; 
@property (assign,nonatomic) int beforeAction;                                                  //@synthesize beforeAction=_beforeAction - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasAfterRecommendedAction; 
@property (assign,nonatomic) int afterRecommendedAction;                                        //@synthesize afterRecommendedAction=_afterRecommendedAction - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) AWDWADiagnosisActionAssociationDifferences * changes;              //@synthesize changes=_changes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(AWDWADiagnosisActionAssociationDifferences *)changes;
-(BOOL)hasChanges;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setChanges:(AWDWADiagnosisActionAssociationDifferences *)arg1 ;
-(int)beforeAction;
-(void)setBeforeAction:(int)arg1 ;
-(void)setHasBeforeAction:(BOOL)arg1 ;
-(BOOL)hasBeforeAction;
-(id)beforeActionAsString:(int)arg1 ;
-(int)StringAsBeforeAction:(id)arg1 ;
-(int)afterRecommendedAction;
-(void)setAfterRecommendedAction:(int)arg1 ;
-(void)setHasAfterRecommendedAction:(BOOL)arg1 ;
-(BOOL)hasAfterRecommendedAction;
-(id)afterRecommendedActionAsString:(int)arg1 ;
-(int)StringAsAfterRecommendedAction:(id)arg1 ;
@end

