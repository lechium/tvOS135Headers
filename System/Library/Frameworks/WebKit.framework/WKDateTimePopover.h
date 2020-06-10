/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKContentView, NSString;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKDateTimePopoverViewController>* _viewController;
	WKContentView* _view;

}

@property (nonatomic,readonly) NSString * calendarType; 
-(void)clear:(id)arg1 ;
-(id)viewController;
-(NSString *)calendarType;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
@end

