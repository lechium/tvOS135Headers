/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * aceWeathers; 
@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,retain) SAUIImageResource * attributionImage; 
+(id)forecastSnippet;
+(id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIImageResource *)attributionImage;
-(void)setAttributionImage:(SAUIImageResource *)arg1 ;
-(NSArray *)aceWeathers;
-(void)setAceWeathers:(NSArray *)arg1 ;
@end

