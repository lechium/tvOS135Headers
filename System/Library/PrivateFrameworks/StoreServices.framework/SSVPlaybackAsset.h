/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject {

	NSDictionary* _assetDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDictionary;              //@synthesize assetDictionary=_assetDictionary - In the implementation block
@property (nonatomic,readonly) NSString * downloadKey; 
@property (nonatomic,readonly) NSString * flavor; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * sinfs; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)URLString;
-(NSString *)flavor;
-(id)initWithAssetDictionary:(id)arg1 ;
-(NSString *)downloadKey;
-(NSArray *)sinfs;
-(NSDictionary *)assetDictionary;
@end

