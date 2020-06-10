/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIMediaLibraryApplicationControllerDelegate;
@interface VUIMediaLibraryApplicationController : NSObject {

	id<VUIMediaLibraryApplicationControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<VUIMediaLibraryApplicationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultController;
-(id<VUIMediaLibraryApplicationControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaLibraryApplicationControllerDelegate>)arg1 ;
-(id)settingsURL;
-(BOOL)isCellularDataForPlaybackEnabled;
-(BOOL)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1 ;
-(void)clearCellularPlaybackQualityOverrides;
-(void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2 ;
-(unsigned long long)assetTypeForRentalMediaItem:(id)arg1 ;
-(void)removeRentalMediaItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

