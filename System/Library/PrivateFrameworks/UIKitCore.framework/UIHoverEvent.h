/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UIHoverEvent : UIEvent {

	NSMapTable* _touchesByContextId;
	NSMapTable* _deliveryTableByTouch;
	BOOL _hasOutstandingUpdates;

}

@property (assign,nonatomic) BOOL hasOutstandingUpdates;              //@synthesize hasOutstandingUpdates=_hasOutstandingUpdates - In the implementation block
-(void)dealloc;
-(long long)type;
-(id)_init;
-(long long)subtype;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)touchesForWindow:(id)arg1 ;
-(id)allTouches;
-(id)touchesForView:(id)arg1 ;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(void)_cancelAllGestureRecognizers;
-(void)_windowDidDetachContext:(id)arg1 ;
-(id)_deliveryTableByTouchCreateIfNeeded:(id)arg1 ;
-(void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(BOOL)arg2 ;
-(id)_touchesByContextId:(unsigned)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)hoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(void)setNeedsUpdateForWindow:(id)arg1 ;
-(void)setNeedsHitTestResetForWindow:(id)arg1 ;
-(void)setNeedsHitTestReset;
-(void)setHoverTouch:(id)arg1 forContextId:(unsigned)arg2 pathIndex:(long long)arg3 ;
-(void)removeHoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(BOOL)hasOutstandingUpdates;
-(void)setHasOutstandingUpdates:(BOOL)arg1 ;
@end

