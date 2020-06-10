/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class ISLivePhotoUIView, AVPlayerItem, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver> {

	ISLivePhotoUIView* _livePhotoView;
	long long _requestID;
	AVPlayerItem* _videoPlayerItem;

}

@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;              //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentView;
-(long long)playbackStyle;
-(void)updateContent;
-(void)imageDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3 ;
-(AVPlayerItem *)videoPlayerItem;
-(void)_updateLivePhotoPlayerItem;
@end

