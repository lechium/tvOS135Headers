/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreFileAssetFairPlayInfo, NSDictionary, NSData;

@interface MPStoreFileAssetFairPlayInfo : NSObject {

	ICStoreFileAssetFairPlayInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * responseSinfDictionary; 
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSData * dpInfoData; 
@property (nonatomic,copy,readonly) NSData * pinfData; 
@property (nonatomic,copy,readonly) NSData * sinfData; 
@property (nonatomic,copy,readonly) NSData * sinf2Data; 
@property (nonatomic,copy,readonly) NSDictionary * purchaseBundleSinfDictionary; 
-(long long)identifier;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(NSData *)dpInfoData;
-(NSData *)pinfData;
-(NSData *)sinfData;
-(NSData *)sinf2Data;
-(NSDictionary *)purchaseBundleSinfDictionary;
-(NSDictionary *)responseSinfDictionary;
-(id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg1 ;
@end

