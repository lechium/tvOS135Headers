/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDBackingStoreObjectProtocol;
@class CKRecordID, HMDBackingStoreLocal, HMDHomeManager, HMDHome, NSUUID, HMDObjectLookup, NSString;

@interface HMDBackingStore : HMFObject <HMFLogging> {

	CKRecordID* _root;
	HMDBackingStoreLocal* _local;
	HMDHomeManager* _homeManager;
	HMDHome* _home;
	NSUUID* _uuid;
	HMDObjectLookup* _lookup;
	id<HMDBackingStoreObjectProtocol> _delegate;

}

@property (nonatomic,readonly) CKRecordID * root;                                            //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) HMDBackingStoreLocal * local;                                   //@synthesize local=_local - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                            //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMDObjectLookup * lookup;                                       //@synthesize lookup=_lookup - In the implementation block
@property (assign,nonatomic,__weak) id<HMDBackingStoreObjectProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)start;
+(id)currentDevice;
+(id)logCategory;
+(id)allowedTypes;
+(id)flushBackingStore;
+(id)internalAllowedTypes;
+(id)resetBackingStore;
-(NSString *)description;
-(id<HMDBackingStoreObjectProtocol>)delegate;
-(void)setDelegate:(id<HMDBackingStoreObjectProtocol>)arg1 ;
-(NSUUID *)uuid;
-(CKRecordID *)root;
-(id)initWithUUID:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setLocal:(HMDBackingStoreLocal *)arg1 ;
-(HMDBackingStoreLocal *)local;
-(id)dumpState;
-(id)logIdentifier;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)transaction:(id)arg1 options:(id)arg2 ;
-(id)initWithUUID:(id)arg1 home:(id)arg2 ;
-(void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(BOOL)arg2 ;
-(void)submitBlock:(/*^block*/id)arg1 ;
-(void)submit:(id)arg1 ;
-(HMDObjectLookup *)lookup;
-(void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2 ;
-(void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2 ;
-(id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id*)arg3 ;
-(void)commit:(id)arg1 run:(BOOL)arg2 save:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 ;
-(id)initWithUUID:(id)arg1 homeManager:(id)arg2 ;
-(id)transactionWithOptions:(id)arg1 ;
-(void)setLookup:(HMDObjectLookup *)arg1 ;
@end

