/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPresentationDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AMSUIWebPagePresenter, AMSUIWebPresentationDelegate;
@class UIViewController, AMSUIWebAppearance, NSDictionary, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;

@interface AMSUIWebContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _shouldSkipInitialRefresh;
	BOOL _hasAppeared;
	BOOL _hasSetNavigationStyle;
	UIViewController*<AMSUIWebPagePresenter> _containedViewController;
	unsigned long long _activePresentationType;
	AMSUIWebAppearance* _appearance;
	long long _containerIndex;
	id<AMSUIWebPresentationDelegate> _modalPresentationDelegate;
	AMSUIWebContainerViewController* _nextContainer;
	NSDictionary* _pageInfo;
	id<AMSUIWebPresentationDelegate> _pushPresentationDelegate;
	AMSUIWebClientContext* _context;
	UIViewController* _hiddenViewController;
	AMSUIWebNavigationBarModel* _navigationBarModel;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                               //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasSetNavigationStyle;                                                     //@synthesize hasSetNavigationStyle=_hasSetNavigationStyle - In the implementation block
@property (nonatomic,retain) UIViewController * hiddenViewController;                                        //@synthesize hiddenViewController=_hiddenViewController - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBarModel;                                //@synthesize navigationBarModel=_navigationBarModel - In the implementation block
@property (nonatomic,readonly) unsigned long long activePresentationType;                                    //@synthesize activePresentationType=_activePresentationType - In the implementation block
@property (nonatomic,retain) AMSUIWebAppearance * appearance;                                                //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) long long containerIndex;                                                       //@synthesize containerIndex=_containerIndex - In the implementation block
@property (nonatomic,retain) UIViewController*<AMSUIWebPagePresenter> containedViewController;               //@synthesize containedViewController=_containedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebPresentationDelegate> modalPresentationDelegate;              //@synthesize modalPresentationDelegate=_modalPresentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebContainerViewController * nextContainer;                         //@synthesize nextContainer=_nextContainer - In the implementation block
@property (nonatomic,retain) NSDictionary * pageInfo;                                                        //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebPresentationDelegate> pushPresentationDelegate;               //@synthesize pushPresentationDelegate=_pushPresentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipInitialRefresh;                                                  //@synthesize shouldSkipInitialRefresh=_shouldSkipInitialRefresh - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSDictionary *)pageInfo;
-(void)setPageInfo:(NSDictionary *)arg1 ;
-(AMSUIWebAppearance *)appearance;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)loadView;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)navigationItem;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setContainerIndex:(long long)arg1 ;
-(long long)containerIndex;
-(void)_applyAppearance;
-(UIViewController*<AMSUIWebPagePresenter>)containedViewController;
-(void)handlePushDismissal;
-(void)_determineActivePresentationType;
-(void)_setupNavBar;
-(BOOL)shouldSkipInitialRefresh;
-(AMSUIWebNavigationBarModel *)navigationBarModel;
-(void)applyModel:(id)arg1 ;
-(void)setShouldSkipInitialRefresh:(BOOL)arg1 ;
-(id<AMSUIWebPresentationDelegate>)pushPresentationDelegate;
-(void)didDismissController:(id)arg1 ;
-(id<AMSUIWebPresentationDelegate>)modalPresentationDelegate;
-(void)handleModalDismissal;
-(void)replaceContentWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleSelectedNavigationButton:(id)arg1 ;
-(BOOL)hasSetNavigationStyle;
-(void)setHasSetNavigationStyle:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 appearance:(id)arg2 navigationBar:(id)arg3 context:(id)arg4 ;
-(void)setContainedViewController:(UIViewController*<AMSUIWebPagePresenter>)arg1 ;
-(unsigned long long)activePresentationType;
-(void)setModalPresentationDelegate:(id<AMSUIWebPresentationDelegate>)arg1 ;
-(AMSUIWebContainerViewController *)nextContainer;
-(void)setNextContainer:(AMSUIWebContainerViewController *)arg1 ;
-(void)setPushPresentationDelegate:(id<AMSUIWebPresentationDelegate>)arg1 ;
-(UIViewController *)hiddenViewController;
-(void)setHiddenViewController:(UIViewController *)arg1 ;
-(void)setNavigationBarModel:(AMSUIWebNavigationBarModel *)arg1 ;
@end
