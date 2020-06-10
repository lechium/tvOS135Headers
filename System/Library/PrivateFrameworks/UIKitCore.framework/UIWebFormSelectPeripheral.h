/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLSelectElement;

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLSelectElement* _selectionNode;
	id<UIWebFormControl> _selectControl;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) id<UIWebFormControl> _selectControl;                //@synthesize selectControl=_selectControl - In the implementation block
+(id)createPeripheralWithDOMHTMLSelectElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id)assistantView;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(void)set_selectControl:(id<UIWebFormControl>)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 ;
-(id<UIWebFormControl>)_selectControl;
@end

