/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString, NSArray;


@protocol GEOTransitFare <NSObject>
@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@required
-(long long)type;
-(NSString *)currencyCode;
-(NSDecimalNumber *)value;
-(BOOL)cashOnly;
-(NSArray *)supportedICCardProviders;

@end
