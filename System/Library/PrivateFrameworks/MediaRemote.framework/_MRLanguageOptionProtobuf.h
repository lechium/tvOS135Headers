/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _characteristics;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _languageTag;
	int _type;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageTag; 
@property (nonatomic,retain) NSString * languageTag;                        //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(Class)characteristicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setCharacteristics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)characteristics;
-(BOOL)hasIdentifier;
-(BOOL)hasDisplayName;
-(void)addCharacteristics:(id)arg1 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(unsigned long long)characteristicsCount;
-(void)clearCharacteristics;
-(id)characteristicsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLanguageTag;
-(NSString *)languageTag;
@end
