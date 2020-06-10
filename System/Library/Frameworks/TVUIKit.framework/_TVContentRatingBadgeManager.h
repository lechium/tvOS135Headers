/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSDictionary;

@interface _TVContentRatingBadgeManager : NSObject {

	BOOL _cachesImages;
	NSCache* _imageCache;
	NSDictionary* _badgeDescriptors;

}

@property (nonatomic,retain) NSCache * imageCache;                         //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSDictionary * badgeDescriptors;              //@synthesize badgeDescriptors=_badgeDescriptors - In the implementation block
@property (assign,nonatomic) BOOL cachesImages;                            //@synthesize cachesImages=_cachesImages - In the implementation block
+(id)sharedInstance;
+(id)_imageLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
+(id)_imageForUnknownRatingLabel:(id)arg1 ;
+(void)_addImageDescriptorToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(BOOL)arg5 ;
+(id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
+(id)_cleanedRatingLabel:(id)arg1 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(id)badgeForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 drawUnknownRatingBadge:(BOOL)arg3 ;
-(id)_badgeDescriptorForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
-(id)_badgeDescriptorForContentRating:(id)arg1 ;
-(NSDictionary *)badgeDescriptors;
-(void)setCachesImages:(BOOL)arg1 ;
-(id)badgeForContentRating:(id)arg1 drawUnknownRatingBadge:(BOOL)arg2 ;
-(BOOL)isTemplatedBadgeForContentRating:(id)arg1 ;
-(BOOL)cachesImages;
-(void)setBadgeDescriptors:(NSDictionary *)arg1 ;
@end

