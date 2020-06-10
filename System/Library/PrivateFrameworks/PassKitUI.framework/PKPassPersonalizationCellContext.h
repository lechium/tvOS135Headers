/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPassPersonalizationCellContext : NSObject {

	BOOL _bindTextToStringRepresentation;
	double _minimumTextLabelWidth;
	long long _keyboardType;
	long long _autocapitalizationType;
	NSString* _title;
	/*^block*/id _stringRepresentationBlock;
	/*^block*/id _contactUpdateBlock;

}

@property (assign,nonatomic) double minimumTextLabelWidth;                     //@synthesize minimumTextLabelWidth=_minimumTextLabelWidth - In the implementation block
@property (assign,nonatomic) long long keyboardType;                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                 //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) BOOL bindTextToStringRepresentation;              //@synthesize bindTextToStringRepresentation=_bindTextToStringRepresentation - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id stringRepresentationBlock;                       //@synthesize stringRepresentationBlock=_stringRepresentationBlock - In the implementation block
@property (nonatomic,copy) id contactUpdateBlock;                              //@synthesize contactUpdateBlock=_contactUpdateBlock - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)keyboardType;
-(long long)autocapitalizationType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(double)minimumTextLabelWidth;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(BOOL)bindTextToStringRepresentation;
-(void)setBindTextToStringRepresentation:(BOOL)arg1 ;
-(id)stringRepresentationBlock;
-(void)setStringRepresentationBlock:(id)arg1 ;
-(id)contactUpdateBlock;
-(void)setContactUpdateBlock:(id)arg1 ;
@end

