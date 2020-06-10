/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLGenericCollectionViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@protocol TVLListScrollerSplitDelegate;
@class UIFocusGuide, UIView;

@interface TVLListScrollerSplitViewController : TVLGenericCollectionViewController <ATVUpdatable> {

	UIFocusGuide* _focusGuide;
	UIView* _headerView;
	id<TVLListScrollerSplitDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVLListScrollerSplitDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVLListScrollerSplitDelegate>)delegate;
-(void)setDelegate:(id<TVLListScrollerSplitDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setPreviewViewController:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)initWithGenericCollectionElement:(id)arg1 ;
-(void)_updateFocusGuide;
-(CGRect)_frameForTable;
-(CGRect)_frameForHeaderView;
-(CGRect)_frameForPreview;
@end
