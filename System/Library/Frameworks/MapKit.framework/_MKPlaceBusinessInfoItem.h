/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIFont, UIColor;

@interface _MKPlaceBusinessInfoItem : NSObject {

	NSString* _displayString;
	BOOL _isAvailable;
	NSAttributedString* _formattedDisplayString;
	UIFont* _font;
	UIColor* _textColor;

}

@property (nonatomic,readonly) NSAttributedString * displayString; 
+(id)itemWithDescription:(id)arg1 availability:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)displayString;
-(void)setFont:(id)arg1 textColor:(id)arg2 ;
@end

