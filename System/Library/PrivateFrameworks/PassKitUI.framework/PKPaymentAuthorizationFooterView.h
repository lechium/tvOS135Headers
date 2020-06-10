/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKGlyphViewDelegate.h>

@protocol PKPaymentAuthorizationFooterViewDelegate;
@class UILabel, PKGlyphView, UIButton, UIView, NSString, NSMutableArray, NSLayoutConstraint, NSArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate> {

	UILabel* _labelView;
	PKGlyphView* _glyphView;
	UIButton* _payWithPasscodeButton;
	UILabel* _passbookPaymentDetailsView;
	UIView* _separatorView;
	UIView* _lockupView;
	NSString* _overrideString;
	unsigned long long _stateTransitionIndex;
	BOOL _deferringState;
	BOOL _deferredStateRequiresRetry;
	NSString* _deferredStateString;
	BOOL _biometricSuccessOutstanding;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _deferredCompletionHandlers;
	NSLayoutConstraint* _separatorLeftConstraint;
	NSArray* _hiddenConstraints;
	NSArray* _staticRegularConstraints;
	NSMutableArray* _dynamicRegularConstraints;
	BOOL _compact;
	BOOL _compactUserIntent;
	long long _constraintState;
	long long _queuedConstraintState;
	BOOL _constraintsDirty;
	BOOL _isPad;
	BOOL _hasPearl;
	double _minimumHeight;
	unsigned _emphasizedEdge;
	BOOL _occludesBodyView;
	long long _state;
	PKPaymentAuthorizationLayout* _layout;
	unsigned long long _requestType;
	unsigned long long _confirmationStyle;
	NSString* _biometricConfirmationTitle;
	NSString* _confirmationTitle;
	NSString* _authorizingTitle;
	id<PKPaymentAuthorizationFooterViewDelegate> _delegate;

}

@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationLayout * layout;                                     //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                            //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationStyle;                                      //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,retain) NSString * biometricConfirmationTitle;                                     //@synthesize biometricConfirmationTitle=_biometricConfirmationTitle - In the implementation block
@property (nonatomic,retain) NSString * confirmationTitle;                                              //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,retain) NSString * authorizingTitle;                                               //@synthesize authorizingTitle=_authorizingTitle - In the implementation block
@property (assign,nonatomic) BOOL occludesBodyView;                                                     //@synthesize occludesBodyView=_occludesBodyView - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPaymentAuthorizationFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationFooterViewDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(unsigned long long)requestType;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)_createSubviews;
-(void)setConfirmationStyle:(unsigned long long)arg1 ;
-(NSString *)confirmationTitle;
-(unsigned long long)confirmationStyle;
-(BOOL)_shouldCompact;
-(void)_prepareConstraints;
-(void)updateRotation;
-(void)glyphViewUserIntentEdgeDidChange:(id)arg1 ;
-(void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setBiometricConfirmationTitle:(NSString *)arg1 ;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(void)setAuthorizingTitle:(NSString *)arg1 ;
-(void)setOccludesBodyView:(BOOL)arg1 ;
-(void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 ;
-(id)_titleLabelAttributedString:(id)arg1 ;
-(id)_titleAttributedStringForState:(long long)arg1 ;
-(id)_payWithPasscodeTitleForState:(long long)arg1 ;
-(BOOL)setConstraintState:(long long)arg1 ;
-(void)_payWithPasscodePressed;
-(id)defaultHeightConstraints;
-(NSString *)biometricConfirmationTitle;
-(NSString *)authorizingTitle;
-(BOOL)occludesBodyView;
@end

