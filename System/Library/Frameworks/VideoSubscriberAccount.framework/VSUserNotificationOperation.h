/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSOperation.h>

@class NSURL, NSString;

@interface VSUserNotificationOperation : NSOperation {

	CFUserNotificationRef _notification;
	NSURL* _iconURL;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	unsigned long long _response;
	/*function pointer*/void* _userNotificationCreateProc;
	/*function pointer*/void* _userNotificationReceiveResponseProc;
	/*function pointer*/void* _userNotificationCancelProc;

}

@property (assign,nonatomic) unsigned long long response;                                                //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationCreateProc;                       //@synthesize userNotificationCreateProc=_userNotificationCreateProc - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationReceiveResponseProc;              //@synthesize userNotificationReceiveResponseProc=_userNotificationReceiveResponseProc - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* userNotificationCancelProc;                       //@synthesize userNotificationCancelProc=_userNotificationCancelProc - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                                              //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitle;                                                //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateButtonTitle;                                              //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
-(id)init;
-(void)cancel;
-(unsigned long long)response;
-(void)setResponse:(unsigned long long)arg1 ;
-(void)main;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(NSString *)defaultButtonTitle;
-(NSString *)alternateButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(/*function pointer*/void*)userNotificationCreateProc;
-(/*function pointer*/void*)userNotificationReceiveResponseProc;
-(/*function pointer*/void*)userNotificationCancelProc;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setUserNotificationCreateProc:(/*function pointer*/void*)arg1 ;
-(void)setUserNotificationReceiveResponseProc:(/*function pointer*/void*)arg1 ;
-(void)setUserNotificationCancelProc:(/*function pointer*/void*)arg1 ;
@end

