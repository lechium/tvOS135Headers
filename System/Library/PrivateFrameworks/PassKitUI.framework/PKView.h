/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable;

@interface PKView : UIView {

	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)removeWindowObserver:(id)arg1 ;
-(void)addWindowObserver:(id)arg1 ;
@end

