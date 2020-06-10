/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MiroAutoEditor, MiroMemory, MiroCloudDownloader, MiroAutoEditController;

@interface MiroAutoEditOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _shouldSave;
	int _requestID;
	MiroAutoEditor* _autoEditorParent;
	MiroMemory* _memory;
	/*^block*/id _cleanupHandler;
	MiroCloudDownloader* _cloudDownloader;
	MiroAutoEditController* _autoEditController;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (retain) MiroAutoEditController * autoEditController;                  //@synthesize autoEditController=_autoEditController - In the implementation block
@property (assign,nonatomic) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (retain) MiroAutoEditor * autoEditorParent;                            //@synthesize autoEditorParent=_autoEditorParent - In the implementation block
@property (retain) MiroMemory * memory;                                          //@synthesize memory=_memory - In the implementation block
@property (copy) id cleanupHandler;                                              //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (assign) BOOL shouldSave;                                              //@synthesize shouldSave=_shouldSave - In the implementation block
-(void)start;
-(void)finished;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)cleanupHandler;
-(MiroMemory *)memory;
-(void)setCleanupHandler:(id)arg1 ;
-(int)requestID;
-(void)setRequestID:(int)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)setShouldSave:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(MiroAutoEditController *)autoEditController;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(MiroCloudDownloader *)cloudDownloader;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)setAutoEditorParent:(MiroAutoEditor *)arg1 ;
-(MiroAutoEditor *)autoEditorParent;
-(BOOL)shouldDownload;
-(void)performAutoEditAsynchronously;
-(void)_downloadWithCompletionHandler:(/*^block*/id)arg1 ;
@end

