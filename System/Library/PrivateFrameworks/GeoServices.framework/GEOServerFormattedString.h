/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOServerFormattedString <NSObject,NSCoding>
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSArray * formatStyles; 
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString; 
@required
-(NSArray *)formatStrings;
-(NSArray *)separators;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(NSArray *)formatStyles;

@end

