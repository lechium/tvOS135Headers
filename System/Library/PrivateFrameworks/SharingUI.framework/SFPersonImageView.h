/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@interface SFPersonImageView : UIImageView {

	BOOL _imageIsSquare;
	double _highlightDarkeningAlpha;

}

@property (assign,nonatomic) BOOL imageIsSquare;                          //@synthesize imageIsSquare=_imageIsSquare - In the implementation block
@property (assign,nonatomic) double highlightDarkeningAlpha;              //@synthesize highlightDarkeningAlpha=_highlightDarkeningAlpha - In the implementation block
+(id)darkenImage:(id)arg1 toLevel:(double)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setImageIsSquare:(BOOL)arg1 ;
-(BOOL)imageIsSquare;
-(double)highlightDarkeningAlpha;
-(id)initWithImage:(id)arg1 isSquare:(BOOL)arg2 ;
-(void)setHighlightDarkeningAlpha:(double)arg1 ;
@end

