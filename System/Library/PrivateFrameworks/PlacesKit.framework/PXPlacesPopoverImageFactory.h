/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PlacesKit/PlacesKit-Structs.h>
@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject {

	NSCache* _cachedBackgroundImages;
	UIColor* _defaultBackgroundColor;

}

@property (nonatomic,retain) NSCache * cachedBackgroundImages;              //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
+(id)sharedInstance;
+(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)init;
-(id)imageNamed:(id)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)createPopoverImageForGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4 ;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)backgroundImageSizeForPopoverAnnotation;
-(double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(BOOL)arg3 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg1 ;
-(NSCache *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSCache *)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
@end

