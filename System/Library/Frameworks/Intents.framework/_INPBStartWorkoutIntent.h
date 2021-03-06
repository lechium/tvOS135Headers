/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBStartWorkoutIntent.h>
@class _INPBDouble, _INPBIntentMetadata, _INPBDataString;


@protocol _INPBStartWorkoutIntent <NSObject>
@property (nonatomic,retain) _INPBDouble * goalValue; 
@property (nonatomic,readonly) BOOL hasGoalValue; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL isOpenEnded; 
@property (assign,nonatomic) BOOL hasIsOpenEnded; 
@property (assign,nonatomic) int workoutGoalUnitType; 
@property (assign,nonatomic) BOOL hasWorkoutGoalUnitType; 
@property (assign,nonatomic) int workoutLocationType; 
@property (assign,nonatomic) BOOL hasWorkoutLocationType; 
@property (nonatomic,retain) _INPBDataString * workoutName; 
@property (nonatomic,readonly) BOOL hasWorkoutName; 
@required
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(_INPBDataString *)workoutName;
-(void)setWorkoutName:(id)arg1;
-(BOOL)hasWorkoutName;
-(id)workoutGoalUnitTypeAsString:(int)arg1;
-(int)StringAsWorkoutGoalUnitType:(id)arg1;
-(id)workoutLocationTypeAsString:(int)arg1;
-(int)StringAsWorkoutLocationType:(id)arg1;
-(_INPBDouble *)goalValue;
-(void)setGoalValue:(id)arg1;
-(BOOL)hasGoalValue;
-(BOOL)isOpenEnded;
-(void)setIsOpenEnded:(BOOL)arg1;
-(BOOL)hasIsOpenEnded;
-(void)setHasIsOpenEnded:(BOOL)arg1;
-(int)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(int)arg1;
-(BOOL)hasWorkoutGoalUnitType;
-(void)setHasWorkoutGoalUnitType:(BOOL)arg1;
-(int)workoutLocationType;
-(void)setWorkoutLocationType:(int)arg1;
-(BOOL)hasWorkoutLocationType;
-(void)setHasWorkoutLocationType:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBDouble, _INPBIntentMetadata, _INPBDataString, NSString;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL _isOpenEnded;
	BOOL __encodeLegacyGloryData;
	int _workoutGoalUnitType;
	int _workoutLocationType;
	_INPBDouble* _goalValue;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDataString* _workoutName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDouble * goalValue;                                                    //@synthesize goalValue=_goalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasGoalValue; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL isOpenEnded;                                                           //@synthesize isOpenEnded=_isOpenEnded - In the implementation block
@property (assign,nonatomic) BOOL hasIsOpenEnded; 
@property (assign,nonatomic) int workoutGoalUnitType;                                                    //@synthesize workoutGoalUnitType=_workoutGoalUnitType - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutGoalUnitType; 
@property (assign,nonatomic) int workoutLocationType;                                                    //@synthesize workoutLocationType=_workoutLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutLocationType; 
@property (nonatomic,retain) _INPBDataString * workoutName;                                              //@synthesize workoutName=_workoutName - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutName; 
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
-(_INPBDataString *)workoutName;
-(void)setWorkoutName:(_INPBDataString *)arg1 ;
-(BOOL)hasWorkoutName;
-(id)workoutGoalUnitTypeAsString:(int)arg1 ;
-(int)StringAsWorkoutGoalUnitType:(id)arg1 ;
-(id)workoutLocationTypeAsString:(int)arg1 ;
-(int)StringAsWorkoutLocationType:(id)arg1 ;
-(_INPBDouble *)goalValue;
-(void)setGoalValue:(_INPBDouble *)arg1 ;
-(BOOL)hasGoalValue;
-(BOOL)isOpenEnded;
-(void)setIsOpenEnded:(BOOL)arg1 ;
-(BOOL)hasIsOpenEnded;
-(void)setHasIsOpenEnded:(BOOL)arg1 ;
-(int)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(int)arg1 ;
-(BOOL)hasWorkoutGoalUnitType;
-(void)setHasWorkoutGoalUnitType:(BOOL)arg1 ;
-(int)workoutLocationType;
-(void)setWorkoutLocationType:(int)arg1 ;
-(BOOL)hasWorkoutLocationType;
-(void)setHasWorkoutLocationType:(BOOL)arg1 ;
@end

