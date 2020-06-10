/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, CKDAccount, NSMutableDictionary;

@interface CKDPCSIdentityManager : NSObject {

	BOOL _isSiloed;
	BOOL _forceEnableReadOnlyManatee;
	NSString* _serviceName;
	CKDAccount* _account;
	NSString* _cachedAccountDSID;
	NSMutableDictionary* _PCSIdentityWrappersByServiceName;
	PCSIdentityDataRef _debugIdentity;

}

@property (retain) CKDAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL isSiloed;                                           //@synthesize isSiloed=_isSiloed - In the implementation block
@property (nonatomic,readonly) BOOL forceEnableReadOnlyManatee;                         //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (retain) NSString * cachedAccountDSID;                                        //@synthesize cachedAccountDSID=_cachedAccountDSID - In the implementation block
@property (retain) NSMutableDictionary * PCSIdentityWrappersByServiceName;              //@synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName - In the implementation block
@property (assign,nonatomic) PCSIdentityDataRef debugIdentity;                          //@synthesize debugIdentity=_debugIdentity - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL currentServiceIsManatee; 
+(id)sharedFakeIdentitySetsByServiceByUsername;
+(PCSIdentitySetDataRef)_copyStingrayIdentitiesForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
+(PCSIdentitySetDataRef)_getTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(void)dealloc;
-(NSString *)serviceName;
-(void)updateAccount:(id)arg1 ;
-(CKDAccount *)account;
-(void)setAccount:(CKDAccount *)arg1 ;
-(BOOL)forceEnableReadOnlyManatee;
-(BOOL)currentServiceIsManatee;
-(PCSIdentityDataRef)createRandomSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)initWithAccount:(id)arg1 serviceName:(id)arg2 isSiloed:(BOOL)arg3 forceEnableReadOnlyManatee:(BOOL)arg4 ;
-(void)identitiesChanged;
-(PCSIdentitySetDataRef)createFullKeychainIdentitySetWithError:(id*)arg1 ;
-(PCSIdentityDataRef)debugSharingIdentity;
-(id)PCSServiceStringFromCKServiceType:(unsigned long long)arg1 ;
-(id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSPublicIdentityDataRef)copyDiversifiedIdentityForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentityDataRef)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2 ;
-(PCSPublicIdentityDataRef)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)copyIdentitySetWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)identitySet:(PCSIdentitySetDataRef)arg1 containsPublicKey:(id)arg2 error:(id*)arg3 ;
-(id)internalServicesToCombineWithLiverpoolKey;
-(id)liverpoolPublicKey;
-(BOOL)isSiloed;
-(void)setCachedAccountDSID:(NSString *)arg1 ;
-(void)setPCSIdentityWrappersByServiceName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)PCSIdentityWrappersByServiceName;
-(BOOL)serviceIsManatee:(id)arg1 ;
-(BOOL)manateeIsAvailableWithError:(id*)arg1 ;
-(NSString *)cachedAccountDSID;
-(PCSIdentitySetDataRef)_copyTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createIdentitySetForService:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(id)_cacheIdentitySet:(PCSIdentitySetDataRef)arg1 forService:(id)arg2 ;
-(BOOL)_hasCurrentKeyForService:(id)arg1 inIdentitySet:(PCSIdentitySetDataRef)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(PCSIdentitySetDataRef)_copyIdentityForService:(id)arg1 useCache:(BOOL)arg2 validateCurrentKey:(BOOL)arg3 error:(id*)arg4 ;
-(id)_copyPublicKeyDataForIdentitySet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)_copyPublicKeyDataForAllIdentitiesInSet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 ;
-(id)_addIdentitiesFromServiceNamed:(id)arg1 dsid:(id)arg2 toMutableSet:(PCSIdentitySetDataRef)arg3 ;
-(PCSIdentityDataRef)debugIdentity;
-(void)setDebugIdentity:(PCSIdentityDataRef)arg1 ;
@end

