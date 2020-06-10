/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsLibraryPrivate;

@interface ALAssetsLibrary : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsLibraryPrivate * internal;              //@synthesize internal=_internal - In the implementation block
+(id)_library;
+(long long)authorizationStatus;
+(id)_albumsInLibrary:(id)arg1 ;
+(void)disableSharedPhotoStreamsSupport;
+(BOOL)_linkedBefore7;
+(CGImageRef)_thumbnailForAssetURL:(id)arg1 ;
+(CGImageRef)_aspectRatioThumbnailForAssetURL:(id)arg1 ;
+(id)_filePathForVideoURL:(id)arg1 outMetadata:(id*)arg2 ;
+(long long)_estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(long long)_estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(id)_exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 ;
+(id)_exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 ;
+(id)_playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 ;
+(id)_playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(ALAssetsLibraryPrivate *)internal;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setInternal:(ALAssetsLibraryPrivate *)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2 ;
-(id)publicErrorFromPrivateError:(id)arg1 ;
-(id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2 ;
-(void)_addGroupForAlbum:(id)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3 ;
-(void)_addGroupListForContainerList:(id)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3 ;
-(void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_writeImageToSavedPhotosAlbum:(CGImageRef)arg1 orientation:(long long)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)writeImageToSavedPhotosAlbum:(CGImageRef)arg1 orientation:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeImageToSavedPhotosAlbum:(CGImageRef)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1 ;
-(void)assetForURL:(id)arg1 resultBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)_copyGroupForURL:(id)arg1 ;
-(void)groupForURL:(id)arg1 resultBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)assetsGroupsRelatedToAssetsGroup:(id)arg1 ;
@end

