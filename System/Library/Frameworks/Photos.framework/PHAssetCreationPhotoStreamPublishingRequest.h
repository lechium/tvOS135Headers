/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {

	NSURL* _fileURL;
	PLManagedAsset* _asset;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(PLManagedAsset *)asset;
-(void)setAsset:(PLManagedAsset *)arg1 ;
@end

