/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSString, NSArray;

@interface _CarTitleView : UIView {

	BOOL _largeText;
	UIView* _view;
	NSString* _text;
	NSArray* _extraConstraints;

}

@property (nonatomic,retain) UIView * view;                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL largeText;                          //@synthesize largeText=_largeText - In the implementation block
@property (nonatomic,retain) NSArray * extraConstraints;              //@synthesize extraConstraints=_extraConstraints - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_updateLayout;
-(void)_updateText;
-(NSArray *)extraConstraints;
-(void)setExtraConstraints:(NSArray *)arg1 ;
-(BOOL)largeText;
-(void)setLargeText:(BOOL)arg1 ;
@end
