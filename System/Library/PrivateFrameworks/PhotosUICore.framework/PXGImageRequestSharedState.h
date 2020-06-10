/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGImageRequestSharedState : NSObject {

	id<PXDisplayAssetFetchResult> _displayAssetFetchResult;
	id<PXGDisplayAssetRequestObserver> _observer;
	unsigned long long _presentationStyles;
	double _screenScale;
	CGSize _targetSize;

}

@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> displayAssetFetchResult;              //@synthesize displayAssetFetchResult=_displayAssetFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXGDisplayAssetRequestObserver> observer;                        //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationStyles;                              //@synthesize presentationStyles=_presentationStyles - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                                  //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) double screenScale;                                                 //@synthesize screenScale=_screenScale - In the implementation block
-(id<PXGDisplayAssetRequestObserver>)observer;
-(double)screenScale;
-(CGSize)targetSize;
-(id)initWithDisplayAssetFetchResult:(id)arg1 observer:(id)arg2 presentationStyles:(unsigned long long)arg3 targetSize:(CGSize)arg4 screenScale:(double)arg5 ;
-(id<PXDisplayAssetFetchResult>)displayAssetFetchResult;
-(unsigned long long)presentationStyles;
@end

