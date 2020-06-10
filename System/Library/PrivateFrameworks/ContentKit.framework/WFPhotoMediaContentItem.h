/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFFileType, PHAsset;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass> {

	WFFileType* _preferredFileType;

}

@property (nonatomic,retain) WFFileType * preferredFileType;              //@synthesize preferredFileType=_preferredFileType - In the implementation block
@property (nonatomic,readonly) PHAsset * asset; 
+(id)typeDescription;
+(id)outputTypes;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)contentCategories;
+(id)itemsWithBurstIdentifier:(id)arg1 ;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
+(id)itemWithAssetIdentifier:(id)arg1 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 contentSource:(id)arg4 ;
+(id)photoAlbums;
+(id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(id)orientation;
-(id)duration;
-(id)width;
-(id)height;
-(id)model;
-(id)isHidden;
-(id)mediaType;
-(PHAsset *)asset;
-(id)make;
-(id)isFavorite;
-(id)imageManager;
-(id)isLivePhoto;
-(BOOL)isScreenshot;
-(id)isBurst;
-(id)outputTypes;
-(WFFileType *)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)assetResourceManager;
-(void)getMetadata:(/*^block*/id)arg1 ;
-(void)getFrameRate:(/*^block*/id)arg1 ;
-(id)metadataIfLocallyAvailable;
-(BOOL)isPhotoType:(id)arg1 ;
-(id)photoTypes;
-(void)getThumbnail:(/*^block*/id)arg1 ofSize:(CGSize)arg2 ;
-(void)retrieveAssetResource:(id)arg1 withNetworkAccess:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)retrieveFileWithImageManager:(/*^block*/id)arg1 forType:(id)arg2 ;
-(id)preferredAssetResourceForType:(id)arg1 ;
-(void)generateAVAsset:(/*^block*/id)arg1 networkAccessAllowed:(BOOL)arg2 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)fullSizeAssetResourcesInResources:(id)arg1 ;
-(id)assetRepresentationTypes;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(void)setPreferredFileType:(WFFileType *)arg1 ;
@end

