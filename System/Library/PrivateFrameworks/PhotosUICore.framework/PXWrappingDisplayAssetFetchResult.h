/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAssetFetchResult.h>

@protocol PXDisplayAssetFetchResult;
@class NSString;

@interface PXWrappingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {

	NSRange _range;
	id<PXDisplayAssetFetchResult> _displayFetchResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) id<PXDisplayAsset> firstObject; 
-(NSString *)description;
-(long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id<PXDisplayAsset>)firstObject;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id)thumbnailAssetAtIndex:(unsigned long long)arg1 ;
-(id)initWithFetchResult:(id)arg1 range:(NSRange)arg2 ;
@end

