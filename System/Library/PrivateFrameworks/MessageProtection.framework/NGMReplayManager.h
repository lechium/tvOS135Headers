/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentContainer;

@interface NGMReplayManager : NSObject {

	NSPersistentContainer* _persistentContainer;

}

@property (retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)deleteReceivingCountersForKey:(id)arg1 ;
-(unsigned)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id*)arg3 success:(BOOL*)arg4 ;
-(/*^block*/id)validateIncomingCounter:(unsigned)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteExpiredSendingDestinations;
-(id)dbNameFromProcess;
-(id)persistentStoreDescriptionWithError:(id*)arg1 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2 ;
-(id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2 ;
-(BOOL)processFetchRequestAndValidate:(id)arg1 counter:(unsigned)arg2 commit:(BOOL)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id*)arg6 ;
-(id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2 ;
@end

