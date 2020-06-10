/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {

	RetainPtr<NSObject<WKFormControl> >* _control;

}

@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
-(NSString *)selectFormPopoverTitle;
-(id)initWithView:(id)arg1 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
@end
