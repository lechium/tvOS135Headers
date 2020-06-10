/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	unsigned long long _longExposureSuggestionState;
	unsigned long long _loopSuggestionState;
	NSData* _recipeBlob;

}

@property (assign,nonatomic) unsigned long long loopSuggestionState;                      //@synthesize loopSuggestionState=_loopSuggestionState - In the implementation block
@property (assign,nonatomic) unsigned long long longExposureSuggestionState;              //@synthesize longExposureSuggestionState=_longExposureSuggestionState - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeBlob; 
@property (nonatomic,retain) NSData * recipeBlob;                                         //@synthesize recipeBlob=_recipeBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(unsigned long long)loopSuggestionState;
-(void)setLoopSuggestionState:(unsigned long long)arg1 ;
-(unsigned long long)longExposureSuggestionState;
-(void)setLongExposureSuggestionState:(unsigned long long)arg1 ;
-(NSData *)recipeBlob;
@end

