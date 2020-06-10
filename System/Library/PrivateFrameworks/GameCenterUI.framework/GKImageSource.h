/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class GKThreadsafeCache, NSString, GKImageBrush, UIImage;

@interface GKImageSource : NSObject {

	BOOL _shouldRenderDefaultImageWithBrush;
	GKThreadsafeCache* _cache;
	NSString* _name;
	GKImageBrush* _imageBrush;
	UIImage* _defaultImage;
	UIImage* _renderedDefaultImage;

}

@property (nonatomic,retain) UIImage * renderedDefaultImage;                      //@synthesize renderedDefaultImage=_renderedDefaultImage - In the implementation block
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GKImageBrush * imageBrush;                           //@synthesize imageBrush=_imageBrush - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                              //@synthesize defaultImage=_defaultImage - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderDefaultImageWithBrush;              //@synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush - In the implementation block
@property (nonatomic,retain) GKThreadsafeCache * cache;                           //@synthesize cache=_cache - In the implementation block
+(void)clearCache;
+(id)sharedCache;
+(id)syncQueue;
+(id)cacheDirectoryForImageID:(id)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(GKThreadsafeCache *)cache;
-(void)setCache:(GKThreadsafeCache *)arg1 ;
-(id)cachedImageForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 imageBrush:(id)arg2 ;
-(id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2 ;
-(id)cachedImageForIdentifier:(id)arg1 ;
-(id)keyForImageIdentifier:(id)arg1 ;
-(GKImageBrush *)imageBrush;
-(id)renderedImageWithImage:(id)arg1 defaultSize:(CGSize)arg2 returnContext:(id*)arg3 ;
-(id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2 ;
-(BOOL)shouldRenderDefaultImageWithBrush;
-(id)renderedImageWithImage:(id)arg1 ;
-(void)setRenderedDefaultImage:(UIImage *)arg1 ;
-(BOOL)shouldUseTestImage;
-(id)renderedTestImage;
-(id)fastCachedImageForKey:(id)arg1 ;
-(UIImage *)renderedDefaultImage;
-(id)fastCachedImageForIdentifier:(id)arg1 ;
-(void)validateFileSystemCache;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3 ;
-(id)processAndCacheImage:(id)arg1 forKey:(id)arg2 ;
-(void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4 ;
-(id)subsourceWithBrush:(id)arg1 ;
-(unsigned long long)cacheCostForImage:(id)arg1 ;
-(id)fastCachedOrDefaultImageForForKey:(id)arg1 ;
-(id)fastCachedOrDefaultImageForIdentifier:(id)arg1 ;
-(void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2 ;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3 ;
-(void)clearCachedImageForIdentifier:(id)arg1 ;
-(void)setImageBrush:(GKImageBrush *)arg1 ;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)setShouldRenderDefaultImageWithBrush:(BOOL)arg1 ;
@end

