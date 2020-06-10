/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>

@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity {

	SecKeyRef _publicKey;

}

@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) IDSMPFullAccountIdentity * fullAccountIdentity; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesAdmin; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesSigning; 
@property (nonatomic,readonly) SecKeyRef publicKey;                                         //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * forwardingTicket; 
+(id)clusterWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(SecKeyRef)publicKey;
-(ENGroupID *)groupID;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(IDSMPFullAccountIdentity *)fullAccountIdentity;
-(id)adminServiceIdentityWithType:(long long)arg1 ;
-(id)signingServiceIdentityWithType:(long long)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
-(NSData *)forwardingTicket;
-(id)publicAccountClusterWithError:(id*)arg1 ;
-(id)clusterByUpdatingGroupID:(id)arg1 error:(id*)arg2 ;
-(id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(NSArray *)fullServiceIdentitiesAdmin;
-(NSArray *)fullServiceIdentitiesSigning;
-(BOOL)isParentOfCluster:(id)arg1 ;
@end

