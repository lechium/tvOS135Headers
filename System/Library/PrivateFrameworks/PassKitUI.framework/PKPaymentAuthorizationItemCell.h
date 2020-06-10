/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSString, NSAttributedString, UIImage;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	UIImageView* _labelImageView;
	NSMutableArray* _constraints;
	BOOL _constraintsDirty;
	BOOL _showsDisclosure;
	BOOL _showsSeparator;
	BOOL _centered;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy) NSAttributedString * label; 
@property (nonatomic,copy) UIImage * labelImage; 
@property (nonatomic,copy) NSString * accessibilityLabel;                  //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosure;                         //@synthesize showsDisclosure=_showsDisclosure - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                          //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
-(void)dealloc;
-(NSAttributedString *)label;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(id)addValue:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isCentered;
-(void)updateConstraints;
-(void)_createSubviews;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(id)addValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setLabelImage:(UIImage *)arg1 ;
-(id)_createValueView;
-(id)colorForValueType:(unsigned long long)arg1 ;
-(id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2 ;
-(UIImage *)labelImage;
-(BOOL)showsDisclosure;
-(BOOL)showsSeparator;
@end

