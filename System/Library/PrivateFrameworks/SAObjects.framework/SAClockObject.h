/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * cityName; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * countryName; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(NSString *)cityName;
-(void)setCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCityName;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
@end
