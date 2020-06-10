/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject {

	GEOPDQuickLinkItem* _quickLinkItem;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSString * appAdamID; 
-(NSString *)title;
-(NSString *)URLString;
-(id)initWithQuickLink:(id)arg1 ;
-(NSString *)appAdamID;
@end
