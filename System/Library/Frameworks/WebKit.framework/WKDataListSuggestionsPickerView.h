/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl> {

	WKDataListSuggestionsControl* _control;

}

@property (assign,nonatomic,__weak) WKDataListSuggestionsControl * control;              //@synthesize control=_control - In the implementation block
-(WKDataListSuggestionsControl *)control;
-(void)setControl:(WKDataListSuggestionsControl *)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
@end

