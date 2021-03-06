/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(id)uuid;
-(int)orientation;
-(double)duration;
-(short)kind;
-(BOOL)isVideo;
-(CGSize*)imageSize;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(id)originalFilename;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)hasLegacyAdjustments;
-(BOOL)isCloudSharedAsset;
-(id)uniformTypeIdentifier;
-(id)pathForAdjustmentFile;
-(short)kindSubtype;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(BOOL)isCloudPlaceholder;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isLoopingVideo;
-(BOOL)isJPEG;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isRAW;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;

@end

