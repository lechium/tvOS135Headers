/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBPauseTimerIntentResponse.h>
@class NSArray;


@protocol _INPBPauseTimerIntentResponse <NSObject>
@property (nonatomic,copy) NSArray * pausedTimers; 
@property (nonatomic,readonly) unsigned long long pausedTimersCount; 
@required
+(Class)pausedTimersType;
-(void)clearPausedTimers;
-(void)addPausedTimers:(id)arg1;
-(id)pausedTimersAtIndex:(unsigned long long)arg1;
-(NSArray *)pausedTimers;
-(void)setPausedTimers:(id)arg1;
-(unsigned long long)pausedTimersCount;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface _INPBPauseTimerIntentResponse : PBCodable <_INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _pausedTimers;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * pausedTimers;                                                       //@synthesize pausedTimers=_pausedTimers - In the implementation block
@property (nonatomic,readonly) unsigned long long pausedTimersCount; 
+(BOOL)supportsSecureCoding;
+(Class)pausedTimersType;
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
-(void)clearPausedTimers;
-(void)addPausedTimers:(id)arg1 ;
-(id)pausedTimersAtIndex:(unsigned long long)arg1 ;
-(NSArray *)pausedTimers;
-(void)setPausedTimers:(NSArray *)arg1 ;
-(unsigned long long)pausedTimersCount;
@end

