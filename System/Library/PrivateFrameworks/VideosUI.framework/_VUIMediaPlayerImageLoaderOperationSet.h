/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
@class MPArtworkCatalog;

@interface _VUIMediaPlayerImageLoaderOperationSet : NSObject {

	id<MPArtworkDataSource> _dataSource;
	MPArtworkCatalog* _artworkCatalog;

}

@property (nonatomic,retain) id<MPArtworkDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;               //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(id<MPArtworkDataSource>)dataSource;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end

