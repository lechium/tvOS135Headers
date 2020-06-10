/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView {

	LPLinkView* _linkView;
	NSLayoutConstraint* _linkTrailingAnchor;

}

@property (nonatomic,retain) NSLayoutConstraint * linkTrailingAnchor;              //@synthesize linkTrailingAnchor=_linkTrailingAnchor - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                                //@synthesize linkView=_linkView - In the implementation block
-(void)updateConstraints;
-(void)contentDidChange;
-(LPLinkView *)linkView;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(NSLayoutConstraint *)linkTrailingAnchor;
-(void)setLinkTrailingAnchor:(NSLayoutConstraint *)arg1 ;
@end

