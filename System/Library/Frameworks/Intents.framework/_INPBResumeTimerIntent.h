/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBResumeTimerIntent.h>
@class _INPBIntentMetadata, _INPBTimer;


@protocol _INPBResumeTimerIntent <NSObject>
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL resumeMultiple; 
@property (assign,nonatomic) BOOL hasResumeMultiple; 
@property (nonatomic,retain) _INPBTimer * targetTimer; 
@property (nonatomic,readonly) BOOL hasTargetTimer; 
@required
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(_INPBTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(BOOL)hasTargetTimer;
-(BOOL)resumeMultiple;
-(void)setResumeMultiple:(BOOL)arg1;
-(BOOL)hasResumeMultiple;
-(void)setHasResumeMultiple:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBIntentMetadata, _INPBTimer, NSString;

@interface _INPBResumeTimerIntent : PBCodable <_INPBResumeTimerIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _resumeMultiple;
	BOOL __encodeLegacyGloryData;
	_INPBIntentMetadata* _intentMetadata;
	_INPBTimer* _targetTimer;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL resumeMultiple;                                                        //@synthesize resumeMultiple=_resumeMultiple - In the implementation block
@property (assign,nonatomic) BOOL hasResumeMultiple; 
@property (nonatomic,retain) _INPBTimer * targetTimer;                                                   //@synthesize targetTimer=_targetTimer - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetTimer; 
+(BOOL)supportsSecureCoding;
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
-(_INPBTimer *)targetTimer;
-(void)setTargetTimer:(_INPBTimer *)arg1 ;
-(BOOL)hasTargetTimer;
-(BOOL)resumeMultiple;
-(void)setResumeMultiple:(BOOL)arg1 ;
-(BOOL)hasResumeMultiple;
-(void)setHasResumeMultiple:(BOOL)arg1 ;
@end

