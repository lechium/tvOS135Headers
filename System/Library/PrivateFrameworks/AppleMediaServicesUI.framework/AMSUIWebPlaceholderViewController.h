/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@protocol AMSUIWebPagePresenter;
@class AMSUIWebLoadingPageModel, UIViewController, AMSUIWebClientContext, AMSUILoadingView, UIView, NSString;

@interface AMSUIWebPlaceholderViewController : UIViewController <AMSUIWebPagePresenter> {

	BOOL _hasAppeared;
	BOOL _isVisible;
	BOOL _shouldSnapshot;
	AMSUIWebLoadingPageModel* _model;
	UIViewController*<AMSUIWebPagePresenter> _originalViewController;
	AMSUIWebClientContext* _context;
	AMSUILoadingView* _loadingView;
	long long _originalOrientation;
	UIView* _snapshotView;
	UIView* _visibleView;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,retain) AMSUILoadingView * loadingView;                                               //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                                                //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshot;                                                          //@synthesize shouldSnapshot=_shouldSnapshot - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * visibleView;                                                         //@synthesize visibleView=_visibleView - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIViewController*<AMSUIWebPagePresenter> originalViewController;              //@synthesize originalViewController=_originalViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(long long)_interfaceOrientation;
-(AMSUIWebLoadingPageModel *)model;
-(BOOL)isVisible;
-(void)setModel:(AMSUIWebLoadingPageModel *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(AMSUILoadingView *)loadingView;
-(void)setLoadingView:(AMSUILoadingView *)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 context:(id)arg2 ;
-(void)_applyAppearance;
-(void)applyPageModel:(id)arg1 ;
-(void)willAppearAfterDismiss;
-(void)setOriginalViewController:(UIViewController*<AMSUIWebPagePresenter>)arg1 ;
-(id)initWithSnapshot:(id)arg1 context:(id)arg2 ;
-(void)_handlePotentialRotation;
-(void)_transitionToLoading;
-(void)_transitionToSnapshot;
-(void)_startReappearTransitionTimer;
-(void)setIsVisible:(BOOL)arg1 ;
-(UIView *)visibleView;
-(void)setVisibleView:(UIView *)arg1 ;
-(void)_replacePrimaryViewWithView:(id)arg1 ;
-(UIViewController*<AMSUIWebPagePresenter>)originalViewController;
-(BOOL)shouldSnapshot;
-(void)setShouldSnapshot:(BOOL)arg1 ;
@end
