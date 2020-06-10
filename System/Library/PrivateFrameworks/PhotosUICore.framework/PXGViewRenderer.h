/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXGRenderer.h>

@protocol PXGRendererDelegate, PXGTextureConverter;
@class NSMutableDictionary, PXScrollViewController, NSString;

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer> {

	NSMutableDictionary* _reusableViewsByClass;
	NSMutableDictionary* _viewBySpriteIndex;
	long long _spriteBufferCapacity;
	unsigned* _spriteIndexes;
	{?=}* _textureInfos;
	CGPoint _renderedVisibleOrigin;
	/*^block*/id _test_renderSnapshotHandler;
	id<PXGRendererDelegate> _delegate;
	id<PXGTextureConverter> _textureConverter;
	PXScrollViewController* _scrollViewController;
	CGRect _visibleRect;
	SCD_Struct_PX23 _interactionState;

}

@property (nonatomic,retain) PXScrollViewController * scrollViewController;              //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGRendererDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                         //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX22 interactionState;                           //@synthesize interactionState=_interactionState - In the implementation block
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) id<PXGTextureConverter> textureConverter;                 //@synthesize textureConverter=_textureConverter - In the implementation block
@property (nonatomic,copy) id test_renderSnapshotHandler;                                //@synthesize test_renderSnapshotHandler=_test_renderSnapshotHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PXGRendererDelegate>)delegate;
-(void)setDelegate:(id<PXGRendererDelegate>)arg1 ;
-(CGRect)visibleRect;
-(double)_screenScale;
-(int)presentationType;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(id)test_renderSnapshotHandler;
-(void)setTest_renderSnapshotHandler:(id)arg1 ;
-(void)setNeedsRender;
-(void)updateWithChangeDetails:(id)arg1 ;
-(void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(SCD_Struct_PX22)interactionState;
-(void)setInteractionState:(SCD_Struct_PX22)arg1 ;
-(id<PXGTextureConverter>)textureConverter;
-(void)_shiftViewsToCompensateForDeferredVisibleOrigin;
-(void)setScrollViewController:(PXScrollViewController *)arg1 ;
-(void)_resizeBuffersForSpriteCount:(long long)arg1 ;
-(void)_makeViewReusable:(id)arg1 ;
-(id)_dequeueViewWithClass:(Class)arg1 ;
-(id)viewForSpriteIndex:(unsigned)arg1 ;
-(PXScrollViewController *)scrollViewController;
@end

