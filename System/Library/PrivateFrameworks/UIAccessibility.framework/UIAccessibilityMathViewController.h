/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class SCRCMathExpression, UIAccessibilityMathWebView, NSDictionary, NSString;

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {

	SCRCMathExpression* _mathExpression;
	UIAccessibilityMathWebView* _webView;
	NSDictionary* _mathDictionary;

}

@property (nonatomic,readonly) NSDictionary * mathDictionary;              //@synthesize mathDictionary=_mathDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidLoad;
-(id)_htmlString;
-(void)_doneButtonTapped;
-(void)_styleBarButtonItem:(id)arg1 ;
-(id)initWithMathDictionary:(id)arg1 ;
-(NSDictionary *)mathDictionary;
@end
