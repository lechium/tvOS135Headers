/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@class NSString;

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	NSString* username;
	SecIdentityRef TLSIdentity;

}

@property (nonatomic,readonly) BOOL wantsModalPresentation; 
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * password; 
+(id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;
@end

