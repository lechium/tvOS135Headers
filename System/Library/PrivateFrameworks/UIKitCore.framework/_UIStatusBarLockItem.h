/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIStatusBarLockView, _UIExpandingGlyphsView, NSTimer, NSString;

@interface _UIStatusBarLockItem : _UIStatusBarItem <_UIBasicAnimationFactory> {

	BOOL _showsLock;
	_UIStatusBarLockView* _lockView;
	_UIExpandingGlyphsView* _stringView;
	NSTimer* _lockDisappearanceTimer;
	long long _unlockFailureCount;

}

@property (nonatomic,retain) _UIStatusBarLockView * lockView;                  //@synthesize lockView=_lockView - In the implementation block
@property (nonatomic,retain) _UIExpandingGlyphsView * stringView;              //@synthesize stringView=_stringView - In the implementation block
@property (nonatomic,retain) NSTimer * lockDisappearanceTimer;                 //@synthesize lockDisappearanceTimer=_lockDisappearanceTimer - In the implementation block
@property (assign,nonatomic) BOOL showsLock;                                   //@synthesize showsLock=_showsLock - In the implementation block
@property (assign,nonatomic) long long unlockFailureCount;                     //@synthesize unlockFailureCount=_unlockFailureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDisplayIdentifier;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setShowsLock:(BOOL)arg1 ;
-(NSTimer *)lockDisappearanceTimer;
-(void)setLockDisappearanceTimer:(NSTimer *)arg1 ;
-(BOOL)showsLock;
-(_UIStatusBarLockView *)lockView;
-(long long)unlockFailureCount;
-(_UIExpandingGlyphsView *)stringView;
-(void)_create_lockView;
-(void)_create_stringView;
-(void)setLockView:(_UIStatusBarLockView *)arg1 ;
-(void)setStringView:(_UIExpandingGlyphsView *)arg1 ;
-(void)setUnlockFailureCount:(long long)arg1 ;
@end

