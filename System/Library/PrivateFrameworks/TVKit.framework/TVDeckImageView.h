/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, NSArray, UIImage;

@interface TVDeckImageView : UIView {

	UIView* _pendingDisplayView;
	unsigned long long _pendingViewType;
	UIView* _displayView;
	unsigned long long _viewType;
	UIImageView* _placeholderImageView;
	double _imageLoadTimeout;
	BOOL _shuffledParade;
	BOOL _inOrderParade;
	NSArray* _imageProxies;
	UIImage* _placeholderImage;
	unsigned long long _deckViewParadeType;
	double _cycleInterval;
	double _transitionDuration;
	double _newDataTransitionDuration;
	CGRect _imageFrame;

}

@property (assign,nonatomic) double cycleInterval;                               //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (assign,nonatomic) double transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double newDataTransitionDuration;                   //@synthesize newDataTransitionDuration=_newDataTransitionDuration - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                               //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                                  //@synthesize imageFrame=_imageFrame - In the implementation block
@property (assign,getter=isShuffled,nonatomic) BOOL shuffledParade;              //@synthesize shuffledParade=_shuffledParade - In the implementation block
@property (assign,getter=isInOrder,nonatomic) BOOL inOrderParade;                //@synthesize inOrderParade=_inOrderParade - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) unsigned long long deckViewParadeType;              //@synthesize deckViewParadeType=_deckViewParadeType - In the implementation block
-(void)dealloc;
-(void)resume;
-(BOOL)isPaused;
-(void)pause;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(double)transitionDuration;
-(CGRect)imageFrame;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setImageFrame:(CGRect)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_dissolveToPendingView;
-(void)_scrollingParadeViewReadyNotification:(id)arg1 ;
-(void)_crossfadeViewReadyNotification:(id)arg1 ;
-(void)_fadeToBlack;
-(unsigned long long)_viewTypeForNumberOfImages:(long long)arg1 ;
-(void)_displayPlaceholderView;
-(double)cycleInterval;
-(double)newDataTransitionDuration;
-(unsigned long long)deckViewParadeType;
-(void)setDeckViewParadeType:(unsigned long long)arg1 ;
-(void)setCycleInterval:(double)arg1 ;
-(void)setNewDataTransitionDuration:(double)arg1 ;
-(void)setInOrder:(BOOL)arg1 ;
-(void)setShuffledParade:(BOOL)arg1 ;
-(void)setInOrderParade:(BOOL)arg1 ;
-(void)_paradeViewReadyNotification:(id)arg1 ;
-(void)_legacyCrossfadeViewReadyNotification:(id)arg1 ;
-(void)setShuffled:(BOOL)arg1 ;
-(BOOL)isShuffled;
-(BOOL)isInOrder;
-(unsigned long long)_paradeThreshold;
@end

