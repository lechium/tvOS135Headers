/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	GEOBusiness* _business;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
-(id)description;
-(GEOBusiness *)business;
-(id)imageForURL:(id)arg1 ;
-(NSMutableDictionary *)imageCache;
-(id)initWithBusiness:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end

