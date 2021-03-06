/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPhoto.h>

@class NSString, NSURL, GEOPDPhoto, GEOPDCaptionedPhoto, NSArray;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {

	GEOPDPhoto* _photo;
	GEOPDCaptionedPhoto* _captionedPhoto;
	NSArray* _sortedPhotoInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) double sizeRatio; 
@property (nonatomic,readonly) BOOL highQuality; 
@property (nonatomic,readonly) BOOL businessProvided; 
-(NSString *)author;
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSString *)uid;
-(id)initWithCaptionedPhoto:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 ;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(BOOL)displayFullScreenPhotoGallery;
-(BOOL)useGallery;
-(BOOL)highQuality;
-(id)largestPhoto;
-(NSURL *)licenseURL;
-(double)sizeRatio;
-(BOOL)businessProvided;
@end

