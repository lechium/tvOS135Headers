/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject {

	GEOPDTip* _geoTip;

}

@property (nonatomic,retain) GEOPDTip * geoTip;                          //@synthesize geoTip=_geoTip - In the implementation block
@property (nonatomic,readonly) BOOL hasTipTime; 
@property (nonatomic,readonly) double tipTime; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedSnippet; 
@property (nonatomic,readonly) NSString * bestImageURL; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,readonly) NSString * tipId; 
-(NSString *)name;
-(GEOPDTip *)geoTip;
-(BOOL)hasTipTime;
-(double)tipTime;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(id)initWithGEOPDTip:(id)arg1 ;
-(NSString *)localizedSnippet;
-(NSString *)bestImageURL;
-(void)setGeoTip:(GEOPDTip *)arg1 ;
@end
