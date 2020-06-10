/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, ASAsset, MAAsset, NSString;

@interface DDSAsset : NSObject {

	NSDictionary* _attributes;
	long long _compatibilityVersion;
	NSURL* _localURL;
	ASAsset* _asAsset;
	MAAsset* _maAsset;

}

@property (nonatomic,retain) NSURL * localURL;                              //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) ASAsset * asAsset;                             //@synthesize asAsset=_asAsset - In the implementation block
@property (nonatomic,retain) MAAsset * maAsset;                             //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,readonly) NSString * debuggingID; 
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(id)asset;
+(id)assetWithASAsset:(id)arg1 ;
+(id)uniqueIdentifierForMAAsset:(id)arg1 ;
+(id)uniqueIdentifierForASAsset:(id)arg1 ;
+(id)assetWithMAAsset:(id)arg1 ;
+(id)debuggingIDsForAssets:(id)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(long long)compatibilityVersion;
-(NSURL *)localURL;
-(void)setLocalURL:(NSURL *)arg1 ;
-(ASAsset *)asAsset;
-(void)setAsAsset:(ASAsset *)arg1 ;
-(void)setMaAsset:(MAAsset *)arg1 ;
-(MAAsset *)maAsset;
-(NSString *)debuggingID;
-(void)setasAsset:(id)arg1 ;
-(void)_mergeAttributes:(id)arg1 ;
@end
