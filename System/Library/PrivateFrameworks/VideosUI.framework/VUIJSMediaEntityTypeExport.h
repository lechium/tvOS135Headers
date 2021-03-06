/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VUIJSMediaEntityTypeExport <JSExport>
@property (nonatomic,readonly) NSString * subtype; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * collectionType; 
@required
+(id)show;
+(id)episode;
+(id)season;
+(id)movie;
+(id)rental;
+(id)homeVideo;
-(NSString *)category;
-(NSString *)subtype;
-(NSString *)collectionType;

@end

