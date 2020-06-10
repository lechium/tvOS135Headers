/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) long long errorCode; 
-(BOOL)success;
-(long long)errorCode;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
@end

