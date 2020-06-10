/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView;


@protocol UIInputViewSetPlacementApplicator <NSObject>
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@required
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
-(void)invalidate;
-(NSArray *)constraints;
-(CGPoint)origin;
-(void)prepare;
-(UIEdgeInsets)contentInsets;
-(void)applyChanges:(id)arg1;
-(UIView *)draggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2;
-(BOOL)allConstraintsActive;
-(UIView *)twoFingerDraggableView;
-(CGRect)popoverFrame;

@end
