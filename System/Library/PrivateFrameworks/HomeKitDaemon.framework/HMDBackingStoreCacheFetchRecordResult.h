/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup, NSData, CKRecord, NSUUID;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {

	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;
	NSData* _data;
	CKRecord* _record;
	unsigned long long _encoding;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(id)description;
-(NSData *)data;
-(HMDBackingStoreCacheGroup *)group;
-(NSUUID *)uuid;
-(unsigned long long)encoding;
-(CKRecord *)record;
-(HMDBackingStoreCacheShareGroup *)share;
-(id)initWithGroup:(id)arg1 share:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 uuid:(id)arg6 ;
@end

