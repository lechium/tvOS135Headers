/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPeerPayment3DTextView, UILabel, UIActivityIndicatorView, CAShapeLayer, UIImageView, NSTimer, NSDecimalNumber, NSString, PKContinuousButton;

@interface PKPeerPaymentBubbleView : UIView {

	PKPeerPayment3DTextView* _renderView;
	BOOL _renderViewRemovedByLossOfWindow;
	BOOL _snapshotInProgress;
	BOOL _usedForSnapshotting;
	UILabel* _messageLabel;
	UILabel* _statusLabel;
	UIActivityIndicatorView* _actionSpinner;
	CAShapeLayer* _maskLayer;
	CGRect _lastBoundsForRoundedCornerLayout;
	UIImageView* _applePayLogoImageView;
	NSTimer* _testTimer;
	BOOL _testTransition;
	BOOL _showsActionSpinner;
	BOOL _hasRoundedCorners;
	BOOL _usesWatchColors;
	BOOL _displaysApplePayLogo;
	BOOL _liveRenderingEnabled;
	unsigned long long _state;
	NSDecimalNumber* _amount;
	NSString* _currency;
	unsigned long long _action;
	/*^block*/id _actionHandler;
	PKContinuousButton* _actionButton;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                               //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                                                    //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                            //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) CGRect referenceBounds; 
@property (assign,nonatomic) BOOL testTransition;                                                  //@synthesize testTransition=_testTransition - In the implementation block
@property (assign,nonatomic) unsigned long long action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                       //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                                              //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * actionButton;                                  //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;                                               //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL usesWatchColors;                                                 //@synthesize usesWatchColors=_usesWatchColors - In the implementation block
@property (assign,nonatomic) BOOL displaysApplePayLogo;                                            //@synthesize displaysApplePayLogo=_displaysApplePayLogo - In the implementation block
@property (assign,getter=isLiveRenderingEnabled,nonatomic) BOOL liveRenderingEnabled;              //@synthesize liveRenderingEnabled=_liveRenderingEnabled - In the implementation block
+(CGSize)referenceSize;
+(CGSize)referenceSizeForState:(unsigned long long)arg1 ;
+(CGSize)referenceSizeForState:(unsigned long long)arg1 andAction:(unsigned long long)arg2 ;
+(id)referenceBackgroundColorForState:(unsigned long long)arg1 ;
+(id)applePayLogo;
+(id)referenceWatchBackgroundColorForState:(unsigned long long)arg1 ;
+(CGSize)referenceSizeForPeerPaymentStatusResponse:(id)arg1 ;
+(id)referenceBackgroundColor;
+(id)generatedSnapshotForDataURL:(id)arg1 contentInset:(UIEdgeInsets)arg2 isFromMe:(BOOL)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CGRect)referenceBounds;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(PKContinuousButton *)actionButton;
-(void)layoutSubviews;
-(id)_backgroundColor;
-(id)_messageText;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)didMoveToWindow;
-(void)awakeFromNib;
-(id)_statusText;
-(void)_actionButtonTapped:(id)arg1 ;
-(void)_updateContent;
-(CGSize)referenceSize;
-(id)_actionTitle;
-(void)performPostRender:(/*^block*/id)arg1 ;
-(id)generatedSnapshot;
-(id)initWithCurrencyAmount:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setDisplaysApplePayLogo:(BOOL)arg1 ;
-(void)setLiveRenderingEnabled:(BOOL)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 state:(unsigned long long)arg3 ;
-(void)setAction:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_messageTextAttributes;
-(double)_messageAlpha;
-(void)updateWithPeerPaymentStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initForSnapshotting;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(void)setTestTransition:(BOOL)arg1 ;
-(void)updateWithPeerPaymentStatusResponse:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithPaymentTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)testTransition;
-(BOOL)showsActionSpinner;
-(BOOL)hasRoundedCorners;
-(BOOL)usesWatchColors;
-(void)setUsesWatchColors:(BOOL)arg1 ;
-(BOOL)displaysApplePayLogo;
-(BOOL)isLiveRenderingEnabled;
@end

