/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager> {

	PLImageFormat* _format;
	BOOL _readOnly;
	PLPhotoLibraryPathManager* _pathManager;
	NSString* _path;
	NSString* _filename;

}

@property (readonly) PLImageFormat * format;                        //@synthesize format=_format - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly; 
+(SCD_Struct_PL2)maxMasterSizeFromSourceImageSize:(SCD_Struct_PL2)arg1 format:(id)arg2 ;
-(NSString *)description;
-(NSString *)path;
-(PLImageFormat *)format;
-(BOOL)isReadOnly;
-(id)_debugDescription;
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(id)thumbnailPathForThumbIdentifier:(id)arg1 ;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)preheatDataForThumbnailIndexes:(id)arg1 ;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3 ;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(BOOL)usesThumbIdentifiers;
-(id)initWithImageFormat:(id)arg1 pathManager:(id)arg2 ;
-(void)deleteEntryWithIdentifier:(id)arg1 ;
@end

