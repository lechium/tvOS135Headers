/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (nonatomic,retain) NSString * workflowID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL shouldPrompt; 
@property (nonatomic,retain) NSData * triggerData; 
@property (nonatomic,copy) NSString * triggerID; 
@property (nonatomic,retain) WFCoreDataRunEvent * runEvents; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
-(id)descriptor;
-(id)trigger;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
@end
