/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage, UIColor;

@interface _TVRatingViewControllerStarCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImage* _coloredFilledImage;
	UIImage* _coloredOutlineImage;
	UIImage* _coloredSuggestionImage;
	UIColor* _starFillColor;
	UIColor* _starOutlineColor;
	UIColor* _starSuggestionColor;
	unsigned long long _state;

}

@property (nonatomic,retain) UIColor * starFillColor;                    //@synthesize starFillColor=_starFillColor - In the implementation block
@property (nonatomic,retain) UIColor * starOutlineColor;                 //@synthesize starOutlineColor=_starOutlineColor - In the implementation block
@property (nonatomic,retain) UIColor * starSuggestionColor;              //@synthesize starSuggestionColor=_starSuggestionColor - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)setStarFillColor:(UIColor *)arg1 ;
-(id)_starImageForState:(unsigned long long)arg1 ;
-(id)_baseImageForState:(unsigned long long)arg1 ;
-(void)setStarOutlineColor:(UIColor *)arg1 ;
-(void)setStarSuggestionColor:(UIColor *)arg1 ;
-(UIColor *)starFillColor;
-(UIColor *)starOutlineColor;
-(UIColor *)starSuggestionColor;
@end

