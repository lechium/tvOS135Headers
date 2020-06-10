/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBCallRecordValue.h>
@class _INPBCallMetrics, _INPBContactValue, _INPBDateTime, NSString, _INPBInteger;


@protocol _INPBCallRecordValue <NSObject>
@property (assign,nonatomic) int callCapability; 
@property (assign,nonatomic) BOOL hasCallCapability; 
@property (nonatomic,retain) _INPBCallMetrics * callMetrics; 
@property (nonatomic,readonly) BOOL hasCallMetrics; 
@property (assign,nonatomic) int callType; 
@property (assign,nonatomic) BOOL hasCallType; 
@property (nonatomic,retain) _INPBContactValue * caller; 
@property (nonatomic,readonly) BOOL hasCaller; 
@property (nonatomic,retain) _INPBDateTime * dateCreated; 
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBInteger * numberOfCalls; 
@property (nonatomic,readonly) BOOL hasNumberOfCalls; 
@property (assign,nonatomic) BOOL unseen; 
@property (assign,nonatomic) BOOL hasUnseen; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(BOOL)hasIdentifier;
-(_INPBDateTime *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(BOOL)hasDateCreated;
-(int)callType;
-(id)callTypeAsString:(int)arg1;
-(int)StringAsCallType:(id)arg1;
-(void)setCallType:(int)arg1;
-(BOOL)hasCallType;
-(void)setHasCallType:(BOOL)arg1;
-(BOOL)unseen;
-(void)setUnseen:(BOOL)arg1;
-(BOOL)hasUnseen;
-(void)setHasUnseen:(BOOL)arg1;
-(_INPBContactValue *)caller;
-(int)callCapability;
-(_INPBInteger *)numberOfCalls;
-(id)callCapabilityAsString:(int)arg1;
-(int)StringAsCallCapability:(id)arg1;
-(void)setCallCapability:(int)arg1;
-(BOOL)hasCallCapability;
-(void)setHasCallCapability:(BOOL)arg1;
-(_INPBCallMetrics *)callMetrics;
-(void)setCallMetrics:(id)arg1;
-(BOOL)hasCallMetrics;
-(void)setCaller:(id)arg1;
-(BOOL)hasCaller;
-(void)setNumberOfCalls:(id)arg1;
-(BOOL)hasNumberOfCalls;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBCallMetrics, _INPBContactValue, _INPBDateTime, NSString, _INPBInteger;

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL _unseen;
	BOOL __encodeLegacyGloryData;
	int _callCapability;
	int _callType;
	_INPBCallMetrics* _callMetrics;
	_INPBContactValue* _caller;
	_INPBDateTime* _dateCreated;
	NSString* _identifier;
	_INPBInteger* _numberOfCalls;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int callCapability;                                                         //@synthesize callCapability=_callCapability - In the implementation block
@property (assign,nonatomic) BOOL hasCallCapability; 
@property (nonatomic,retain) _INPBCallMetrics * callMetrics;                                             //@synthesize callMetrics=_callMetrics - In the implementation block
@property (nonatomic,readonly) BOOL hasCallMetrics; 
@property (assign,nonatomic) int callType;                                                               //@synthesize callType=_callType - In the implementation block
@property (assign,nonatomic) BOOL hasCallType; 
@property (nonatomic,retain) _INPBContactValue * caller;                                                 //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) BOOL hasCaller; 
@property (nonatomic,retain) _INPBDateTime * dateCreated;                                                //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBInteger * numberOfCalls;                                               //@synthesize numberOfCalls=_numberOfCalls - In the implementation block
@property (nonatomic,readonly) BOOL hasNumberOfCalls; 
@property (assign,nonatomic) BOOL unseen;                                                                //@synthesize unseen=_unseen - In the implementation block
@property (assign,nonatomic) BOOL hasUnseen; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDateTime *)dateCreated;
-(void)setDateCreated:(_INPBDateTime *)arg1 ;
-(BOOL)hasDateCreated;
-(int)callType;
-(id)callTypeAsString:(int)arg1 ;
-(int)StringAsCallType:(id)arg1 ;
-(void)setCallType:(int)arg1 ;
-(BOOL)hasCallType;
-(void)setHasCallType:(BOOL)arg1 ;
-(BOOL)unseen;
-(void)setUnseen:(BOOL)arg1 ;
-(BOOL)hasUnseen;
-(void)setHasUnseen:(BOOL)arg1 ;
-(_INPBContactValue *)caller;
-(int)callCapability;
-(_INPBInteger *)numberOfCalls;
-(id)callCapabilityAsString:(int)arg1 ;
-(int)StringAsCallCapability:(id)arg1 ;
-(void)setCallCapability:(int)arg1 ;
-(BOOL)hasCallCapability;
-(void)setHasCallCapability:(BOOL)arg1 ;
-(_INPBCallMetrics *)callMetrics;
-(void)setCallMetrics:(_INPBCallMetrics *)arg1 ;
-(BOOL)hasCallMetrics;
-(void)setCaller:(_INPBContactValue *)arg1 ;
-(BOOL)hasCaller;
-(void)setNumberOfCalls:(_INPBInteger *)arg1 ;
-(BOOL)hasNumberOfCalls;
@end
