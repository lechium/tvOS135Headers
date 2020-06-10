/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (assign,nonatomic) BOOL showAsDraft; 
@property (nonatomic,retain) SASmsSms * sms; 
+(id)showSmsMessage;
+(id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASmsSms *)sms;
-(id)encodedClassName;
-(BOOL)showAsDraft;
-(void)setShowAsDraft:(BOOL)arg1 ;
-(void)setSms:(SASmsSms *)arg1 ;
@end
