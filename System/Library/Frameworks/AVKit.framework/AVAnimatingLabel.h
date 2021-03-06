/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSFormatter, UILabel, NSString, UIFont, UIColor;

@interface AVAnimatingLabel : UIView {

	BOOL _isTextOverridden;
	BOOL _valuesRepresentDates;
	NSFormatter* _formatter;
	UILabel* _label;

}

@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) id labelValue; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
+(Class)layerClass;
+(id)animatingNumberLabel;
+(id)animatingDurationLabel;
+(id)animatingDateLabelForTimeStyle:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)labelValue;
-(void)setLabelValue:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(id)initWithFrame:(CGRect)arg1 formatter:(id)arg2 ;
-(id)animatingLabelLayer;
-(id)labelPresentationValue;
-(void)setTimeInterval:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTimeInterval:(double)arg1 ;
@end

