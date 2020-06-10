/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDashboardLayout.h>

@class NSMutableDictionary, NSString;

@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {

	BOOL _needsCustomLocation;
	BOOL _userIsActivelyDragging;
	BOOL _currentDraggingWentBelowThreshold;
	BOOL _userIsHoldingCardInCurrentDrag;
	BOOL _userWasHoldingCard;
	BOOL _bouncing;
	BOOL _showNonPassCells;
	double _revealingContentOffset;
	CGSize _passCellSize;
	NSMutableDictionary* _attributesPerIndexPath;
	CGSize _currentSize;
	BOOL _isCompactUI;
	BOOL _preventLayoutComputation;
	BOOL _fade;

}

@property (assign,nonatomic) BOOL fade;                             //@synthesize fade=_fade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(void)setFade:(BOOL)arg1 ;
-(void)revealContentAnimated:(BOOL)arg1 ;
-(void)hideContent;
-(id)_indexPathForPassGroup;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg1 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(BOOL)fade;
@end

