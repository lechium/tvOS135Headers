/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBUpdateMediaAffinityIntent.h>
@class _INPBIntentMetadata, NSArray, _INPBMediaSearch;


@protocol _INPBUpdateMediaAffinityIntent <NSObject>
@property (assign,nonatomic) int affinityType; 
@property (assign,nonatomic) BOOL hasAffinityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,readonly) unsigned long long mediaItemsCount; 
@property (nonatomic,retain) _INPBMediaSearch * mediaSearch; 
@property (nonatomic,readonly) BOOL hasMediaSearch; 
@required
+(Class)mediaItemsType;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)clearMediaItems;
-(void)addMediaItems:(id)arg1;
-(id)mediaItemsAtIndex:(unsigned long long)arg1;
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;
-(unsigned long long)mediaItemsCount;
-(_INPBMediaSearch *)mediaSearch;
-(void)setMediaSearch:(id)arg1;
-(BOOL)hasMediaSearch;
-(int)affinityType;
-(void)setAffinityType:(int)arg1;
-(id)affinityTypeAsString:(int)arg1;
-(int)StringAsAffinityType:(id)arg1;
-(BOOL)hasAffinityType;
-(void)setHasAffinityType:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBIntentMetadata, NSArray, _INPBMediaSearch, NSString;

@interface _INPBUpdateMediaAffinityIntent : PBCodable <_INPBUpdateMediaAffinityIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _affinityType;
	_INPBIntentMetadata* _intentMetadata;
	NSArray* _mediaItems;
	_INPBMediaSearch* _mediaSearch;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int affinityType;                                                           //@synthesize affinityType=_affinityType - In the implementation block
@property (assign,nonatomic) BOOL hasAffinityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,copy) NSArray * mediaItems;                                                         //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaItemsCount; 
@property (nonatomic,retain) _INPBMediaSearch * mediaSearch;                                             //@synthesize mediaSearch=_mediaSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaSearch; 
+(BOOL)supportsSecureCoding;
+(Class)mediaItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)clearMediaItems;
-(void)addMediaItems:(id)arg1 ;
-(id)mediaItemsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(unsigned long long)mediaItemsCount;
-(_INPBMediaSearch *)mediaSearch;
-(void)setMediaSearch:(_INPBMediaSearch *)arg1 ;
-(BOOL)hasMediaSearch;
-(int)affinityType;
-(void)setAffinityType:(int)arg1 ;
-(id)affinityTypeAsString:(int)arg1 ;
-(int)StringAsAffinityType:(id)arg1 ;
-(BOOL)hasAffinityType;
-(void)setHasAffinityType:(BOOL)arg1 ;
@end

