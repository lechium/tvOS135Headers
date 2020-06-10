/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {

	RetainPtr<UIDatePicker>* _datePicker;
	NSString* _formatString;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;
	WKContentView* _view;

}
-(void)dealloc;
-(id)calendarType;
-(void)_dateChanged;
-(id)datePicker;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(BOOL)shouldPresentGregorianCalendar:(const FocusedElementInformation*)arg1 ;
-(void)_dateChangeHandler:(id)arg1 ;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(RetainPtr<NSDateFormatter>*)dateFormatterForPicker;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
@end

