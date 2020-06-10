/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _deletedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * deletedRecordZoneID;              //@synthesize deletedRecordZoneID=_deletedRecordZoneID - In the implementation block
-(id)description;
-(void)dealloc;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(CKRecordZoneID *)deletedRecordZoneID;
@end

