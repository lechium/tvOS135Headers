/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput, PXTilingScrollController, PXTilingControllerCompositionObserver;
@class NSSet;

@interface PXTilingControllerComposition : NSObject {

	BOOL _active;
	NSSet* _tilingControllers;
	id<PXTilingControllerCompositionInput> _input;
	id<PXTilingControllerCompositionOutput> _output;
	id<PXTilingScrollController> __scrollController;
	id<PXTilingControllerCompositionObserver> _observer;

}

@property (assign,setter=_setScrollController:,nonatomic,__weak) id<PXTilingScrollController> _scrollController;              //@synthesize _scrollController=__scrollController - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionObserver> observer;                                       //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tilingControllers;                                                                //@synthesize tilingControllers=_tilingControllers - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionInput> input;                                             //@synthesize input=_input - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionOutput> output;                                           //@synthesize output=_output - In the implementation block
-(id<PXTilingControllerCompositionObserver>)observer;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id<PXTilingControllerCompositionInput>)input;
-(void)setObserver:(id<PXTilingControllerCompositionObserver>)arg1 ;
-(void)setInput:(id<PXTilingControllerCompositionInput>)arg1 ;
-(id<PXTilingControllerCompositionOutput>)output;
-(void)setOutput:(id<PXTilingControllerCompositionOutput>)arg1 ;
-(void)updateComposition;
-(void)invalidateComposition;
-(void)invalidateCompositionWithContext:(id)arg1 ;
-(void)_setScrollController:(id)arg1 ;
-(NSSet *)tilingControllers;
-(id<PXTilingScrollController>)_scrollController;
@end

