/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBListShortcutsIntent.h>
@class NSArray, _INPBIntentMetadata;


@protocol _INPBListShortcutsIntent <NSObject>
@property (nonatomic,copy) NSArray * appTitles; 
@property (nonatomic,readonly) unsigned long long appTitlesCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int originDevice; 
@property (assign,nonatomic) BOOL hasOriginDevice; 
@required
+(Class)appTitleType;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(int)originDevice;
-(void)setOriginDevice:(int)arg1;
-(BOOL)hasOriginDevice;
-(NSArray *)appTitles;
-(void)setAppTitles:(id)arg1;
-(void)clearAppTitles;
-(void)addAppTitle:(id)arg1;
-(id)appTitleAtIndex:(unsigned long long)arg1;
-(id)originDeviceAsString:(int)arg1;
-(int)StringAsOriginDevice:(id)arg1;
-(unsigned long long)appTitlesCount;
-(void)setHasOriginDevice:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, _INPBIntentMetadata, NSString;

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _originDevice;
	NSArray* _appTitles;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * appTitles;                                                          //@synthesize appTitles=_appTitles - In the implementation block
@property (nonatomic,readonly) unsigned long long appTitlesCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int originDevice;                                                           //@synthesize originDevice=_originDevice - In the implementation block
@property (assign,nonatomic) BOOL hasOriginDevice; 
+(BOOL)supportsSecureCoding;
+(Class)appTitleType;
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
-(int)originDevice;
-(void)setOriginDevice:(int)arg1 ;
-(BOOL)hasOriginDevice;
-(NSArray *)appTitles;
-(void)setAppTitles:(NSArray *)arg1 ;
-(void)clearAppTitles;
-(void)addAppTitle:(id)arg1 ;
-(id)appTitleAtIndex:(unsigned long long)arg1 ;
-(id)originDeviceAsString:(int)arg1 ;
-(int)StringAsOriginDevice:(id)arg1 ;
-(unsigned long long)appTitlesCount;
-(void)setHasOriginDevice:(BOOL)arg1 ;
@end

