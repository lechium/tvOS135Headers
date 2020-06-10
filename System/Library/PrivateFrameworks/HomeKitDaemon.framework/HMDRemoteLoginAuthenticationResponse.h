/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMRemoteLoginMessage.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class ACAccount, NSString, NSDictionary;

@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {

	ACAccount* _loggedInAccount;

}

@property (nonatomic,retain) ACAccount * loggedInAccount;                   //@synthesize loggedInAccount=_loggedInAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageName;
-(ACAccount *)loggedInAccount;
-(NSDictionary *)messagePayload;
-(NSString *)xpcMessageName;
-(void)setLoggedInAccount:(ACAccount *)arg1 ;
@end

