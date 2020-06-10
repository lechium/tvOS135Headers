/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKPerformActionSelectItemExpiresHeader : UIView {

	UILabel* _leadingLabel;
	UILabel* _trailingLabel;
	NSString* _leadingString;
	NSString* _trailingString;

}

@property (nonatomic,retain) NSString * leadingString;               //@synthesize leadingString=_leadingString - In the implementation block
@property (nonatomic,retain) NSString * trailingString;              //@synthesize trailingString=_trailingString - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setLeadingString:(NSString *)arg1 ;
-(void)setTrailingString:(NSString *)arg1 ;
-(NSString *)leadingString;
-(NSString *)trailingString;
@end

