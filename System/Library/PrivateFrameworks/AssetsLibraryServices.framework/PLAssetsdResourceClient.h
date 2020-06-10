/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceClient : PLAssetsdBaseClient
-(void)saveAssetWithJobDictionary:(id)arg1 imageSurface:(IOSurfaceRef)arg2 previewImageSurface:(IOSurfaceRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addGroupWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fileURLForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2 fileURL:(id*)arg3 error:(id*)arg4 ;
-(BOOL)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2 fileExtension:(id*)arg3 fileDescriptor:(int*)arg4 error:(id*)arg5 ;
-(BOOL)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageData:(id*)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9 error:(id*)arg10 ;
-(void)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)sandboxExtensionForAssetResourcePath:(id)arg1 sandboxExtensionToken:(id*)arg2 error:(id*)arg3 ;
-(BOOL)sandboxExtensionForFileSystemBookmark:(id)arg1 bookmarkURL:(id*)arg2 sandboxExtensionToken:(id*)arg3 error:(id*)arg4 ;
-(void)videoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)videoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 restrictToPlayable:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)adjustmentDataForAsset:(id)arg1 withDataBlob:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 outFileLength:(long long*)arg5 error:(id*)arg6 ;
-(void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(unsigned long long)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)consolidateAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 error:(id*)arg3 ;
-(id)projectExtensionDataForProjectUuid:(id)arg1 ;
@end

