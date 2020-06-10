/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerRequestFactory : NSObject
+(id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(BOOL)arg2 error:(id*)arg3 ;
+(id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id*)arg4 ;
+(id)_logoutSAMLRequestStringWithError:(id*)arg1 ;
-(id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)silentAuthenticationApplicationControllerRequest;
-(id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2 ;
-(id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1 ;
-(id)STBOptOutApplicationControllerRequest;
@end

