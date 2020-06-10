/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue, ICDelegationConsumerNetServiceDelegate;
@class NSObject, NSNetService, ICDelegationServiceSecuritySettings, NSDictionary, NSString;

@interface ICDelegationConsumerNetService : NSObject <NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _didPublish;
	BOOL _isPublished;
	NSNetService* _netService;
	NSObject*<OS_dispatch_queue> _netServiceQueue;
	ICDelegationServiceSecuritySettings* _securitySettings;
	id<ICDelegationConsumerNetServiceDelegate> _delegate;
	NSDictionary* _userIdentityDelegationAccountUUIDs;

}

@property (assign,nonatomic,__weak) id<ICDelegationConsumerNetServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userIdentityDelegationAccountUUIDs;                //@synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs - In the implementation block
@property (nonatomic,readonly) ICDelegationServiceSecuritySettings * securitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ICDelegationConsumerNetServiceDelegate>)delegate;
-(void)setDelegate:(id<ICDelegationConsumerNetServiceDelegate>)arg1 ;
-(void)stop;
-(void)publish;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)_updateNetServiceStatus;
-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 ;
-(ICDelegationServiceSecuritySettings *)securitySettings;
-(NSDictionary *)userIdentityDelegationAccountUUIDs;
@end

