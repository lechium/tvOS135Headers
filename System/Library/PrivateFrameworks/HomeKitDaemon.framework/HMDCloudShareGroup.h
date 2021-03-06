/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCloudCache, HMDCloudZone, NSUUID, HMDCloudGroup, CKShare, HMDBackingStoreCacheShareGroup, NSMutableArray, NSString, HMDCloudRecord;

@interface HMDCloudShareGroup : HMFObject {

	HMDCloudCache* _cache;
	HMDCloudZone* _cloudZone;
	NSUUID* _ownerID;
	NSUUID* _identifier;
	HMDCloudGroup* _cloudGroup;
	CKShare* _share;
	HMDBackingStoreCacheShareGroup* _backingStoreShareGroup;
	NSMutableArray* _recordNames;

}

@property (nonatomic,readonly) NSString * rootRecordName; 
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * backingStoreShareGroup;              //@synthesize backingStoreShareGroup=_backingStoreShareGroup - In the implementation block
@property (nonatomic,readonly) NSUUID * parentIdentifier; 
@property (nonatomic,retain) NSMutableArray * recordNames;                                         //@synthesize recordNames=_recordNames - In the implementation block
@property (nonatomic,readonly) HMDCloudRecord * rootRecord; 
@property (assign,nonatomic,__weak) HMDCloudCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                                      //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,readonly) NSUUID * ownerID;                                                   //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudGroup * cloudGroup;                                    //@synthesize cloudGroup=_cloudGroup - In the implementation block
@property (nonatomic,retain) CKShare * share;                                                      //@synthesize share=_share - In the implementation block
+(id)shortDescription;
+(void)createShareGroupWithRootRecordName:(id)arg1 owner:(id)arg2 cloudGroup:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(id)init;
-(NSUUID *)identifier;
-(HMDCloudCache *)cache;
-(id)shortDescription;
-(CKShare *)share;
-(HMDCloudRecord *)rootRecord;
-(void)setShare:(CKShare *)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)setCache:(HMDCloudCache *)arg1 ;
-(NSUUID *)ownerID;
-(void)addCloudRecord:(id)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(HMDCloudZone *)cloudZone;
-(NSString *)rootRecordName;
-(NSMutableArray *)recordNames;
-(void)setRecordNames:(NSMutableArray *)arg1 ;
-(void)updateCloudRecord:(id)arg1 ;
-(HMDCloudGroup *)cloudGroup;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)fetchCloudRecordMap:(/*^block*/id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)rootRecordModelObject;
-(void)deleteCloudRecord:(id)arg1 ;
-(BOOL)isRootRecordName:(id)arg1 ;
-(void)cloudRecordWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCloudRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudRecordNames:(id)arg1 ;
-(id)initWithBackingStoreCacheShareGroup:(id)arg1 cloudGroup:(id)arg2 ;
-(HMDBackingStoreCacheShareGroup *)backingStoreShareGroup;
-(id)rootRecordObjectID;
-(void)_cloudRecordsForParentIDs:(id)arg1 recursive:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)shareOnlyUpdateCloudRecord:(id)arg1 ;
-(void)shareOnlyDeleteCloudRecord:(id)arg1 ;
-(void)setCloudGroup:(HMDCloudGroup *)arg1 ;
-(void)setBackingStoreShareGroup:(HMDBackingStoreCacheShareGroup *)arg1 ;
@end

