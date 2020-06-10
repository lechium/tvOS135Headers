/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateGroupHeader : UICollectionReusableView {

	NSString* _text;
	long long _alignment;
	id<TUICandidateViewStyle> _style;
	double _rowHeight;
	UILabel* _textLabel;
	CGRect _visibleBounds;
	CGRect _virtualLabelContainerFrame;

}

@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) CGRect virtualLabelContainerFrame;              //@synthesize virtualLabelContainerFrame=_virtualLabelContainerFrame - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long alignment;                            //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double rowHeight;                               //@synthesize rowHeight=_rowHeight - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(CGRect)visibleBounds;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)updateGroupHeaderLabelPosition;
-(void)setVirtualLabelContainerFrame:(CGRect)arg1 ;
-(CGRect)virtualLabelContainerFrame;
@end

