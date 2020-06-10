/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSObject;

@interface TVPMusicBarsView : UIView {

	NSArray* _barViews;
	float _repeatCount;
	long long _musicBarsStyle;
	NSObject* _didBecomeActiveNotification;
	NSObject* _didChangeReduceTransparencyNotification;

}

@property (assign,nonatomic) long long musicBarsStyle; 
-(id)init;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_createBarViews;
-(void)setMusicBarsStyle:(long long)arg1 ;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)_setBarHeights:(double)arg1 ;
-(void)_updateMusicBarsStyle;
-(long long)musicBarsStyle;
-(void)resumeAnimating;
-(void)resumeAnimatingIfNeeded;
@end

