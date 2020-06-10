/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface OBPrivacyCombinedController : UIViewController {

	BOOL _allowsOpeningSafari;
	BOOL _presentedFromPrivacyPane;
	NSString* _displayLanguage;

}

@property (assign) BOOL allowsOpeningSafari;                   //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (retain) NSString * displayLanguage;                 //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) BOOL presentedFromPrivacyPane;              //@synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane - In the implementation block
+(id)new;
+(void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithIdentifiers:(id)arg1 ;
-(NSString *)displayLanguage;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)presentedFromPrivacyPane;
-(void)setPresentedFromPrivacyPane:(BOOL)arg1 ;
@end

