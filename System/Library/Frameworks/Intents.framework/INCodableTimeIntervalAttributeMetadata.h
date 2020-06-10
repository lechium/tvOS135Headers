/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata {

	long long _defaultUnit;
	long long _minimumUnit;
	long long _maximumUnit;
	NSNumber* _defaultValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (assign,nonatomic) long long defaultUnit;                //@synthesize defaultUnit=_defaultUnit - In the implementation block
@property (assign,nonatomic) long long minimumUnit;                //@synthesize minimumUnit=_minimumUnit - In the implementation block
@property (assign,nonatomic) long long maximumUnit;                //@synthesize maximumUnit=_maximumUnit - In the implementation block
@property (nonatomic,retain) NSNumber * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(NSNumber *)defaultValue;
-(NSNumber *)minimumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(NSNumber *)maximumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)defaultUnit;
-(void)setDefaultUnit:(long long)arg1 ;
-(long long)minimumUnit;
-(void)setMinimumUnit:(long long)arg1 ;
-(long long)maximumUnit;
-(void)setMaximumUnit:(long long)arg1 ;
@end

