/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBActivity.h>
@class NSArray, _INPBString;


@protocol _INPBActivity <NSObject>
@property (nonatomic,copy) NSArray * activityDescriptors; 
@property (nonatomic,readonly) unsigned long long activityDescriptorsCount; 
@property (nonatomic,retain) _INPBString * activityType; 
@property (nonatomic,readonly) BOOL hasActivityType; 
@required
+(Class)activityDescriptorsType;
-(_INPBString *)activityType;
-(void)setActivityType:(id)arg1;
-(void)clearActivityDescriptors;
-(void)addActivityDescriptors:(id)arg1;
-(id)activityDescriptorsAtIndex:(unsigned long long)arg1;
-(NSArray *)activityDescriptors;
-(void)setActivityDescriptors:(id)arg1;
-(unsigned long long)activityDescriptorsCount;
-(BOOL)hasActivityType;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, _INPBString, NSString;

@interface _INPBActivity : PBCodable <_INPBActivity, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _activityDescriptors;
	_INPBString* _activityType;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * activityDescriptors;                                                //@synthesize activityDescriptors=_activityDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long activityDescriptorsCount; 
@property (nonatomic,retain) _INPBString * activityType;                                                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
+(BOOL)supportsSecureCoding;
+(Class)activityDescriptorsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBString *)activityType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setActivityType:(_INPBString *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearActivityDescriptors;
-(void)addActivityDescriptors:(id)arg1 ;
-(id)activityDescriptorsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)activityDescriptors;
-(void)setActivityDescriptors:(NSArray *)arg1 ;
-(unsigned long long)activityDescriptorsCount;
-(BOOL)hasActivityType;
@end

