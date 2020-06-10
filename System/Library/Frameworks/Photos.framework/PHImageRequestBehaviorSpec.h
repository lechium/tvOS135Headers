/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageRequestBehaviorSpec : NSObject {

	BOOL _synchronous;
	BOOL _networkAccessAllowed;
	BOOL _allowPlaceholder;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	long long _choosingPolicy;
	unsigned long long _loadingOptions;
	long long _version;
	long long _resizeMode;
	double _minimumTableThumbnailLongSide;

}

@property (assign,nonatomic) long long choosingPolicy;                                             //@synthesize choosingPolicy=_choosingPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long loadingOptions;                                    //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) double minimumTableThumbnailLongSide;                                 //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
+(unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)setSynchronous:(BOOL)arg1 ;
-(id)shortDescription;
-(BOOL)isSynchronous;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setLoadingOptions:(unsigned long long)arg1 ;
-(void)setMinimumTableThumbnailLongSide:(double)arg1 ;
-(unsigned long long)loadingOptions;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(double)minimumTableThumbnailLongSide;
-(BOOL)shouldLoadImage;
-(BOOL)shouldLoadData;
-(BOOL)shouldLoadURL;
-(BOOL)shouldLoadDataOrURL;
-(long long)choosingPolicy;
-(void)setChoosingPolicy:(long long)arg1 ;
-(long long)resizeMode;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)allowPlaceholder;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
@end

