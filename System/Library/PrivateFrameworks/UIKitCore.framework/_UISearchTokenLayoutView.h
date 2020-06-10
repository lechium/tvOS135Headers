/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIAtomTextViewAtomLayout;
@class UIView;

@interface _UISearchTokenLayoutView : UIView {

	UIView*<_UIAtomTextViewAtomLayout> _delegateView;

}

@property (nonatomic,readonly) UIEdgeInsets atomInsets; 
@property (nonatomic,retain) UIView*<_UIAtomTextViewAtomLayout> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
+(id)layoutViewWithDelegateView:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)viewForLastBaselineLayout;
-(id)initWithDelegateView:(id)arg1 ;
-(UIEdgeInsets)atomInsets;
-(CGRect)selectionBounds;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(UIView*<_UIAtomTextViewAtomLayout>)delegateView;
-(void)setDelegateView:(UIView*<_UIAtomTextViewAtomLayout>)arg1 ;
@end

