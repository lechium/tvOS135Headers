/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackingStoreTransactionOptions, HMDBackingStore, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {

	BOOL _committed;
	HMDBackingStoreTransactionOptions* _options;
	HMDBackingStore* _backingStore;
	NSMutableArray* _objects;

}

@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                   //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL committed;                                             //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreTransactionOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sort:(id)arg1 ;
+(id)logCategory;
-(NSString *)description;
-(void)run;
-(HMDBackingStoreTransactionOptions *)options;
-(void)setCommitted:(BOOL)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)save;
-(NSMutableArray *)objects;
-(BOOL)committed;
-(void)run:(/*^block*/id)arg1 ;
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(void)add:(id)arg1 ;
-(id)logIdentifier;
-(void)add:(id)arg1 withMessage:(id)arg2 ;
-(void)dumpDebug;
-(void)dumpDebug:(id)arg1 ;
-(void)addObjects:(id)arg1 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3 ;
-(void)runWithoutSave:(/*^block*/id)arg1 ;
@end

