/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_source;
@class UILabel, NSObject, UIActivityIndicatorView, UIVisualEffectView, NSString;

@interface TVCSActivityIndicatorViewController : UIViewController {

	UILabel* _activityTextLabel;
	BOOL _showingSpinner;
	NSObject*<OS_dispatch_source> _spinnerTimer;
	UIActivityIndicatorView* _spinnerView;
	UIVisualEffectView* _visualEffectView;
	BOOL _activityIndicatorHidden;
	BOOL _allowMenuToDismiss;
	NSString* _activityText;
	double _activityIndicatorDelay;

}

@property (nonatomic,copy) NSString * activityText;                                                      //@synthesize activityText=_activityText - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (assign,nonatomic) double activityIndicatorDelay;                                              //@synthesize activityIndicatorDelay=_activityIndicatorDelay - In the implementation block
@property (assign,nonatomic) BOOL allowMenuToDismiss;                                                    //@synthesize allowMenuToDismiss=_allowMenuToDismiss - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_didSelectMenu;
-(void)setActivityText:(NSString *)arg1 ;
-(void)setActivityIndicatorDelay:(double)arg1 ;
-(NSString *)activityText;
-(BOOL)isActivityIndicatorHidden;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(double)activityIndicatorDelay;
-(BOOL)allowMenuToDismiss;
-(void)setAllowMenuToDismiss:(BOOL)arg1 ;
@end

