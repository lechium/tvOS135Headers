/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PXGView, PXGLayout;

@interface PXGPPTViewController : UIViewController {

	PXGView* _gridView;
	PXGLayout* _initialLayout;

}

@property (nonatomic,readonly) PXGLayout * initialLayout;              //@synthesize initialLayout=_initialLayout - In the implementation block
@property (nonatomic,readonly) PXGView * gridView;                     //@synthesize gridView=_gridView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(PXGView *)gridView;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)animate:(/*^block*/id)arg1 animationRenderingCompletionHandler:(/*^block*/id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(PXGLayout *)initialLayout;
@end

