/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreFileAssetInfo, NSURL, NSString, NSArray, NSData;

@interface MPStoreFileAssetInfo : NSObject {

	ICStoreFileAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * assetURL; 
@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSArray * fairPlayInfoList; 
@property (nonatomic,readonly) long long flavorType; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) NSData * md5; 
@property (nonatomic,readonly) long long protectionType; 
-(unsigned long long)fileSize;
-(NSData *)md5;
-(NSURL *)assetURL;
-(NSString *)fileExtension;
-(NSString *)downloadKey;
-(NSArray *)fairPlayInfoList;
-(long long)flavorType;
-(long long)protectionType;
-(id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1 ;
@end

