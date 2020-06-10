/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIFocusGroupMap;

@interface _UIFocusLinearMovementDebugView : UIView {

	NSArray* _items;
	_UIFocusGroupMap* _focusGroupMap;
	BOOL _colorCoding;

}
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithItems:(id)arg1 focusGroupMap:(id)arg2 ;
-(id)_drawableItems;
-(id)_itemFramesFromItems:(id)arg1 ;
-(id)_lineSegmentsFromFrames:(id)arg1 ;
@end
