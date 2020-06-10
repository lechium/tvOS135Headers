/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFOAuth2SessionManager.h>
#import <libobjc.A.dylib/WFOAuth2ProviderSessionManager.h>

@class NSString;

@interface WFImgurOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 ;
-(id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
-(id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

