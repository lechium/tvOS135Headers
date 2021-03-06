/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class CNFAccessAuthorization;

@interface CNAccessAuthorization : NSObject {

	CNFAccessAuthorization* _authorizer;

}

@property (nonatomic,retain) CNFAccessAuthorization * authorizer;              //@synthesize authorizer=_authorizer - In the implementation block
+(id)new;
+(id)allAuthorizationKeys;
-(id)init;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg1 ;
-(id)initWithAuthorizer:(id)arg1 ;
-(BOOL)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2 ;
-(void)removeUnauthorizedKeysFromFetchRequest:(id)arg1 ;
-(CNFAccessAuthorization *)authorizer;
-(void)performWork:(/*^block*/id)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)setAuthorizer:(CNFAccessAuthorization *)arg1 ;
@end

