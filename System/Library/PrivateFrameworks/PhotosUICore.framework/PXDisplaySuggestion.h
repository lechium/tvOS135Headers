/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, NSDate;


@protocol PXDisplaySuggestion <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) NSDictionary * actionProperties; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(unsigned short)type;
-(unsigned short)state;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(unsigned short)subtype;
-(NSString *)localIdentifier;
-(NSDictionary *)actionProperties;
-(id)fetchKeyAssets;

@end
