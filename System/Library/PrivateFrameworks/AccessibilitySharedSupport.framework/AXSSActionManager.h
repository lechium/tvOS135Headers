/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXSSActionManager : NSObject
-(void)performDefaultAction;
-(void)press;
-(BOOL)isInteractive;
-(void)rebootDevice;
-(void)willPerformStandardCommandWithIdentifier:(id)arg1 ;
-(void)goToNextElementOfType:(unsigned long long)arg1 ;
-(void)didPerformStandardCommandWithIdentifier:(id)arg1 ;
-(void)goToPreviousElementOfType:(unsigned long long)arg1 ;
-(void)enterContainer;
-(void)exitContainer;
-(void)goToNextSection;
-(void)goToPreviousSection;
-(void)lift;
-(void)activateSiri;
-(void)moveLeft;
-(void)goToFirstElement;
-(void)beginSwipeLeft;
-(void)endSwipe;
-(void)beginTwoFingerSwipeLeft;
-(void)beginRotateLeft;
-(void)endRotate;
-(void)moveRight;
-(void)goToLastElement;
-(void)beginSwipeRight;
-(void)beginTwoFingerSwipeRight;
-(void)beginRotateRight;
-(void)moveUp;
-(void)beginSwipeUp;
-(void)beginTwoFingerSwipeUp;
-(void)beginPinchOut;
-(void)endPinch;
-(void)moveDown;
-(void)moveInsideNext;
-(void)moveInsidePrevious;
-(void)beginSwipeDown;
-(void)beginTwoFingerSwipeDown;
-(void)beginPinchIn;
-(void)twoFingerPress;
-(void)twoFingerLift;
-(void)goHome;
-(void)openContextualMenu;
-(void)showAccessibilityActions;
-(void)toggleAppSwitcher;
-(void)activateAccessibilityShortcut;
-(void)toggleControlCenter;
-(void)toggleDock;
-(void)performEscape;
-(void)performSysdiagnose;
-(void)lockScreen;
-(void)toggleNotificationCenter;
-(void)armApplePay;
-(void)rotateDevice;
-(void)activateSOS;
-(void)activateTypeahead;
-(void)togglePassthroughMode;
-(void)toggleGesturesMode;
-(void)toggleHelp;
-(void)begin3DTouch;
-(void)end3DTouch;
-(void)didSuppressCommand:(id)arg1 ;
-(void)handleCommand:(id)arg1 ;
-(void)endTwoFingerSwipe;
@end

