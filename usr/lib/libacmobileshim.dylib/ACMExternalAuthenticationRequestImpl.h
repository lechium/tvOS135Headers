/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMBaseAuthenticationRequestImpl.h>
#import <libobjc.A.dylib/ACMExternalAuthenticationRequest.h>

@class NSString, NSNumber;

@interface ACMExternalAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl <ACMExternalAuthenticationRequest>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSString * userName; 
@property (nonatomic,retain) NSNumber * appID; 
@property (nonatomic,retain) NSString * appIDKey; 
@property (nonatomic,retain) NSNumber * serverResponseTimeout; 
@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@property (assign) BOOL canUseTouchID; 
-(id)init;
@end
