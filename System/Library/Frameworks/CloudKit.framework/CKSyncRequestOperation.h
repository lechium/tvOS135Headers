/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@interface CKSyncRequestOperation : CKOperation {

	/*^block*/id _willBeginSyncRequestWithClientsBlock;
	/*^block*/id _clientSyncStartedBlock;
	/*^block*/id _clientSyncProgressedBlock;
	/*^block*/id _clientSyncCompletedBlock;
	/*^block*/id _syncRequestCompletionBlock;

}

@property (nonatomic,copy) id willBeginSyncRequestWithClientsBlock;              //@synthesize willBeginSyncRequestWithClientsBlock=_willBeginSyncRequestWithClientsBlock - In the implementation block
@property (nonatomic,copy) id clientSyncStartedBlock;                            //@synthesize clientSyncStartedBlock=_clientSyncStartedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncProgressedBlock;                         //@synthesize clientSyncProgressedBlock=_clientSyncProgressedBlock - In the implementation block
@property (nonatomic,copy) id clientSyncCompletedBlock;                          //@synthesize clientSyncCompletedBlock=_clientSyncCompletedBlock - In the implementation block
@property (nonatomic,copy) id syncRequestCompletionBlock;                        //@synthesize syncRequestCompletionBlock=_syncRequestCompletionBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)willBeginSyncRequestWithClientsBlock;
-(id)clientSyncStartedBlock;
-(id)clientSyncProgressedBlock;
-(id)clientSyncCompletedBlock;
-(id)syncRequestCompletionBlock;
-(void)setSyncRequestCompletionBlock:(id)arg1 ;
-(void)setClientSyncStartedBlock:(id)arg1 ;
-(void)setClientSyncProgressedBlock:(id)arg1 ;
-(void)setClientSyncCompletedBlock:(id)arg1 ;
-(void)setWillBeginSyncRequestWithClientsBlock:(id)arg1 ;
-(Class)operationInfoClass;
@end

