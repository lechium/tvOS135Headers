/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENStoreClient.h>

@class EDAMUserStoreClient, NSString;

@interface ENUserStoreClient : ENStoreClient {

	EDAMUserStoreClient* _client;
	NSString* _authenticationToken;

}

@property (nonatomic,retain) EDAMUserStoreClient * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSString * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
+(id)userStoreClientWithUrl:(id)arg1 authenticationToken:(id)arg2 ;
-(EDAMUserStoreClient *)client;
-(void)setClient:(EDAMUserStoreClient *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(id)initWithUserStoreUrl:(id)arg1 authenticationToken:(id)arg2 ;
-(id)authenticateToBusiness;
-(void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchBootstrapInfoWithLocale:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUserWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPublicUserInfoWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPremiumInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchNoteStoreURLWithCompletion:(/*^block*/id)arg1 ;
-(void)authenticateToBusinessWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeLongSessionWithAuthenticationToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkVersionWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)getBootstrapInfoWithLocale:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)getUserWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)getPublicUserInfoWithUsername:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)getPremiumInfoWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)getNoteStoreUrlWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)authenticateToBusinessWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)revokeLongSessionWithAuthenticationToken:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end
