/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentHeroImageControllerDelegate.h>

@protocol PKHeroImageView;
@class UIView, NSMutableArray, UIImageView, UILabel, PKPaymentHeroImageController, NSMutableDictionary, NSString;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {

	long long _context;
	CGSize _aspectSize;
	BOOL _isAnimating;
	UIView* _backgroundView;
	UIView*<PKHeroImageView> _heroImageView;
	NSMutableArray* _cardViews;
	UIImageView* _presentedCard;
	unsigned long long _animationContext;
	UILabel* _instructionLabel;
	PKPaymentHeroImageController* _heroImageController;
	NSMutableDictionary* _networkImageViewsMap;
	BOOL _imageDownloadFailed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetBackgroundColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forImage:(id)arg3 error:(id)arg4 ;
-(id)pk_childrenForAppearance;
-(id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3 ;
-(void)_createSubviews:(id)arg1 ;
-(CGRect)_frameForCardView:(id)arg1 ;
-(CGRect)_frameForInstructionLabel;
-(unsigned long long)_indexOfNextObject:(id)arg1 withArray:(id)arg2 ;
-(void)_transitionFromCardToCard:(id)arg1 ;
-(id)_imageWithData:(id)arg1 ;
-(void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2 ;
-(BOOL)_isSmallPhone;
-(void)_createCardViewsWithImages:(id)arg1 ;
-(double)_instructionFontSizeForContext:(long long)arg1 ;
-(void)_setCardViews:(id)arg1 networks:(id)arg2 ;
-(id)_resizeImage:(id)arg1 ;
-(void)_finishedTransitionToCard:(id)arg1 ;
-(void)stopAnimation;
@end

