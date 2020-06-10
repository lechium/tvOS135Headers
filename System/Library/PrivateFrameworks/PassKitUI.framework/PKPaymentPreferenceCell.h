/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(void)dealloc;
-(BOOL)hasError;
-(void)prepareForReuse;
-(void)setHasError:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

