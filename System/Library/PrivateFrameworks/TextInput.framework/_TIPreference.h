/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TIPreference : NSObject {

	NSString* _key;
	NSString* _domain;
	NSString* _fallbackKey;
	id _defaultValue;
	id _currentValue;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * fallbackKey;              //@synthesize fallbackKey=_fallbackKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) id currentValue;                     //@synthesize currentValue=_currentValue - In the implementation block
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4 ;
-(NSString *)key;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
-(id)currentValue;
-(void)setFallbackKey:(NSString *)arg1 ;
-(NSString *)fallbackKey;
-(void)setCurrentValue:(id)arg1 ;
@end

