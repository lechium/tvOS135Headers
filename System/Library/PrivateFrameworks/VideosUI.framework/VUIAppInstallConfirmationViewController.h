/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAppLoadingViewController.h>

@protocol WLKInstallable;
@class NSString, UIBarButtonItem, VUIAppInstallConfirmationView, SSLookupItemOffer, UIButton, VUIAppInstallLockup;

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {

	NSString* _updateTitle;
	NSString* _updateMessage;
	/*^block*/id _cancelationHandler;
	/*^block*/id _actionHandler;
	/*^block*/id _appStoreHandler;
	/*^block*/id _secondaryLinkHandler;
	unsigned long long _state;
	UIBarButtonItem* _barButtonItem;
	VUIAppInstallConfirmationView* _confirmationView;
	id<WLKInstallable> _installable;
	SSLookupItemOffer* _itemOffer;

}

@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                               //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,retain) VUIAppInstallConfirmationView * confirmationView;              //@synthesize confirmationView=_confirmationView - In the implementation block
@property (nonatomic,retain) id<WLKInstallable> installable;                                //@synthesize installable=_installable - In the implementation block
@property (nonatomic,retain) SSLookupItemOffer * itemOffer;                                 //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                           //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id appStoreHandler;                                              //@synthesize appStoreHandler=_appStoreHandler - In the implementation block
@property (nonatomic,copy) id secondaryLinkHandler;                                         //@synthesize secondaryLinkHandler=_secondaryLinkHandler - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton; 
@property (nonatomic,readonly) VUIAppInstallLockup * lockup; 
@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)loadView;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(SSLookupItemOffer *)itemOffer;
-(VUIAppInstallConfirmationView *)confirmationView;
-(UIButton *)actionButton;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(VUIAppInstallLockup *)lockup;
-(UIBarButtonItem *)barButtonItem;
-(id)cancelationHandler;
-(void)setCancelationHandler:(id)arg1 ;
-(id<WLKInstallable>)installable;
-(id)initWithInstallable:(id)arg1 ;
-(void)setUpdateTitle:(id)arg1 ;
-(void)setUpdateMessage:(id)arg1 ;
-(void)setAppStoreHandler:(id)arg1 ;
-(void)setSecondaryLinkTitle:(id)arg1 ;
-(id)secondaryLinkHandler;
-(void)setSecondaryLinkHandler:(id)arg1 ;
-(void)setPreInstallState;
-(void)setInstallingState;
-(void)_handleCancel;
-(void)_handleAppStore;
-(void)_handleSecondaryLink;
-(void)_handleAction;
-(void)_fetchAppInfo;
-(id)_namedRatingWithRatings:(id)arg1 ;
-(void)_fetchStoreInfoForAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_fileSizeWithDeviceSizes:(id)arg1 ;
-(id)appStoreHandler;
-(void)setConfirmationView:(VUIAppInstallConfirmationView *)arg1 ;
-(void)setInstallable:(id<WLKInstallable>)arg1 ;
-(void)setItemOffer:(SSLookupItemOffer *)arg1 ;
@end

