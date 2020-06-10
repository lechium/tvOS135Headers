/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSDate, NSString, WFFileRepresentation, NSData, WFWorkflowRecord;

@interface WFCloudKitWorkflow : NSObject <WFCloudKitItem> {

	CKRecordID* _identifier;
	NSDate* _createdAt;
	NSDate* _modifiedAt;
	NSString* _name;
	NSString* _workflowSubtitle;
	NSString* _associatedAppBundleIdentifier;
	WFFileRepresentation* _serializedDataFile;
	long long _cachedSyncHash;
	NSData* _serializedQuarantineData;
	NSData* _serializedAccessResourcePerWorkflowStateData;
	NSString* _lastSavedOnDeviceName;
	WFWorkflowRecord* _cachedRecord;

}

@property (nonatomic,retain) WFWorkflowRecord * cachedRecord;                                  //@synthesize cachedRecord=_cachedRecord - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAt;                                            //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * workflowSubtitle;                                        //@synthesize workflowSubtitle=_workflowSubtitle - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;                           //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * serializedDataFile;                        //@synthesize serializedDataFile=_serializedDataFile - In the implementation block
@property (assign,nonatomic) long long cachedSyncHash;                                         //@synthesize cachedSyncHash=_cachedSyncHash - In the implementation block
@property (nonatomic,copy) NSData * serializedQuarantineData;                                  //@synthesize serializedQuarantineData=_serializedQuarantineData - In the implementation block
@property (nonatomic,copy) NSData * serializedAccessResourcePerWorkflowStateData;              //@synthesize serializedAccessResourcePerWorkflowStateData=_serializedAccessResourcePerWorkflowStateData - In the implementation block
@property (nonatomic,copy) NSString * lastSavedOnDeviceName;                                   //@synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(NSDate *)createdAt;
-(NSString *)associatedAppBundleIdentifier;
-(void)setWorkflowSubtitle:(NSString *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)workflowSubtitle;
-(BOOL)isValidForSyncing;
-(id)initWithRecord:(id)arg1 identifier:(id)arg2 ;
-(id)recordRepresentationWithError:(id*)arg1 ;
-(long long)cachedSyncHash;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(void)setLastSavedOnDeviceName:(NSString *)arg1 ;
-(NSDate *)modifiedAt;
-(WFFileRepresentation *)serializedDataFile;
-(void)setSerializedDataFile:(WFFileRepresentation *)arg1 ;
-(void)setCachedSyncHash:(long long)arg1 ;
-(NSData *)serializedQuarantineData;
-(void)setSerializedQuarantineData:(NSData *)arg1 ;
-(NSData *)serializedAccessResourcePerWorkflowStateData;
-(void)setSerializedAccessResourcePerWorkflowStateData:(NSData *)arg1 ;
-(NSString *)lastSavedOnDeviceName;
-(WFWorkflowRecord *)cachedRecord;
-(void)setCachedRecord:(WFWorkflowRecord *)arg1 ;
@end

