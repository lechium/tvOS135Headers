/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, ISLivePhotoUIView;

@interface PXImageLayerModulator : NSObject {

	BOOL _displayingVideoComplement;
	CALayer* _layer;
	ISLivePhotoUIView* _livePhotoView;

}

@property (nonatomic,readonly) CALayer * layer;                                                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) ISLivePhotoUIView * livePhotoView;                                              //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (getter=isDisplayingVideoComplement,nonatomic,readonly) BOOL displayingVideoComplement;              //@synthesize displayingVideoComplement=_displayingVideoComplement - In the implementation block
-(id)init;
-(CALayer *)layer;
-(void)performChanges:(/*^block*/id)arg1 ;
-(ISLivePhotoUIView *)livePhotoView;
-(BOOL)isDisplayingVideoComplement;
@end

