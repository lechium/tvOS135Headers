/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol PXFeedbackFormDelegate;
@class UIActivityIndicatorView;

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController {

	BOOL __showsActivityIndicator;
	id<PXFeedbackFormDelegate> _delegate;
	UIActivityIndicatorView* __activityIndicatorView;

}

@property (nonatomic,retain) id<PXFeedbackFormDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _activityIndicatorView;              //@synthesize _activityIndicatorView=__activityIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL _showsActivityIndicator;                                    //@synthesize _showsActivityIndicator=__showsActivityIndicator - In the implementation block
-(id<PXFeedbackFormDelegate>)delegate;
-(void)setDelegate:(id<PXFeedbackFormDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)_activityIndicatorView;
-(void)_likedIt:(id)arg1 ;
-(void)_dislikedIt:(id)arg1 ;
-(void)_doFileRadar:(id)arg1 ;
-(void)_fileRadar:(id)arg1 ;
-(void)showMoreFeedbackForm;
-(void)_provideFeedback:(id)arg1 ;
-(void)setShowsActivityIndicator:(BOOL)arg1 ;
-(void)cancelFeedback:(id)arg1 ;
-(void)finishWithSuccess:(BOOL)arg1 ;
-(BOOL)_showsActivityIndicator;
-(void)set_showsActivityIndicator:(BOOL)arg1 ;
@end

