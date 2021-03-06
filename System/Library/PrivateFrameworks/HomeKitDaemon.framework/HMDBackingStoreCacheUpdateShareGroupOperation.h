/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup, CKShare, NSArray;

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	CKShare* _share;
	NSArray* _users;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKShare * share;                                      //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSArray * users;                                      //@synthesize users=_users - In the implementation block
-(HMDBackingStoreCacheShareGroup *)record;
-(CKShare *)share;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(id)mainReturningError;
-(id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

