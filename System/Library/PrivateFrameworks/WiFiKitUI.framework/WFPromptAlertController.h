/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@interface WFPromptAlertController : UIAlertController {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)promptAlertControllerWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 successTitle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end

