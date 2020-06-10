/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBShowHomeIntent.h>
@class NSArray, _INPBIntentMetadata, _INPBDateTimeRange;


@protocol _INPBShowHomeIntent <NSObject>
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,readonly) unsigned long long filtersCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDateTimeRange * time; 
@property (nonatomic,readonly) BOOL hasTime; 
@required
+(Class)filtersType;
-(_INPBDateTimeRange *)time;
-(void)setTime:(id)arg1;
-(NSArray *)filters;
-(void)setFilters:(id)arg1;
-(BOOL)hasTime;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)addFilters:(id)arg1;
-(id)filtersAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, _INPBIntentMetadata, _INPBDateTimeRange, NSString;

@interface _INPBShowHomeIntent : PBCodable <_INPBShowHomeIntent, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _filters;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDateTimeRange* _time;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * filters;                                                            //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) unsigned long long filtersCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDateTimeRange * time;                                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) BOOL hasTime; 
+(BOOL)supportsSecureCoding;
+(Class)filtersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBDateTimeRange *)time;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(_INPBDateTimeRange *)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(BOOL)hasTime;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
@end
