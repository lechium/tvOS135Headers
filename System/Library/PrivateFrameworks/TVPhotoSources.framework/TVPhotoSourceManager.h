/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVPhotoSourceAppProvider;

@interface TVPhotoSourceManager : NSObject {

	NSArray* _photoSources;
	id _sourceMatchingContext;
	TVPhotoSourceAppProvider* _appProviderPhotoSource;

}

@property (nonatomic,copy,readonly) NSArray * photoSources; 
+(id)defaultManager;
-(void)setupPhotoSources;
-(NSArray *)photoSources;
-(void)_fetchPhotoCollections:(/*^block*/id)arg1 ;
-(id)_photoSourcesFromExtensions:(id)arg1 ;
-(id)_photoSourcesFromAppProviders;
-(void)_updatePhotoSources:(id)arg1 ;
-(void)fetchPhotoCollectionsInfoWithCompletion:(/*^block*/id)arg1 ;
@end

