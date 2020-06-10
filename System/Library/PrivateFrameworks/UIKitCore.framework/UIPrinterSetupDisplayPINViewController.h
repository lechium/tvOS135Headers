/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController {

	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;              //@synthesize printer=_printer - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)enterPIN;
-(void)showDisplayMessage:(long long)arg1 ;
@end

