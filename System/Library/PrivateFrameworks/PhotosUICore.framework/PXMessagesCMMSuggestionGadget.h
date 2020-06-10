/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXCMMSuggestion, PXMessagesCMMSuggestionGadgetActionDelegate;
@class PXUpdater, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, PXGadgetSpec, NSString;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget> {

	PXUpdater* _updater;
	PXCMMPosterHeaderView* _posterHeaderView;
	PXRoundedCornerOverlayView* _roundedOverlayView;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	unsigned long long _accessoryButtonType;
	PXGadgetSpec* _gadgetSpec;
	id<PXCMMSuggestion> _suggestion;
	id<PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;

}

@property (nonatomic,retain) id<PXCMMSuggestion> suggestion;                                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                          //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasContentToDisplay; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType;                                           //@synthesize accessoryButtonType=_accessoryButtonType - In the implementation block
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
-(id)initWithCoder:(id)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)localizedTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setSuggestion:(id<PXCMMSuggestion>)arg1 ;
-(id<PXCMMSuggestion>)suggestion;
-(id)initWithSuggestion:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)contentViewController;
-(void)setActionDelegate:(id<PXMessagesCMMSuggestionGadgetActionDelegate>)arg1 ;
-(id<PXMessagesCMMSuggestionGadgetActionDelegate>)actionDelegate;
-(unsigned long long)gadgetType;
-(void)userDidSelectGadget;
-(unsigned long long)accessoryButtonType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(BOOL)hasContentToDisplay;
-(void)_scheduleLayout;
-(void)_updatePosterHeaderView;
@end

