/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVMusicBarsView : UIView {

	NSArray* _barViews;
	float _repeatCount;
	unsigned long long _musicBarsStyle;

}

@property (assign,nonatomic) unsigned long long musicBarsStyle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_createBarViews;
-(void)setMusicBarsStyle:(unsigned long long)arg1 ;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)_setBarHeights:(double)arg1 ;
-(void)_updateMusicBarsStyle;
-(unsigned long long)musicBarsStyle;
-(void)resumeAnimating;
@end

