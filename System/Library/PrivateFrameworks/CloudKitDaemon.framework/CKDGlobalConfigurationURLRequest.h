/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(id)url;
-(long long)serverType;
-(long long)partitionType;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
@end

