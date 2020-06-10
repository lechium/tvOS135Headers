/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL, NSOperationQueue;

@interface BRiWorkWebShareMigrateOperation : BROperation {

	NSURL* _url;
	NSOperationQueue* _operationQueue;
	/*^block*/id _shareMigrationCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (copy) id shareMigrationCompletionBlock;                           //@synthesize shareMigrationCompletionBlock=_shareMigrationCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_startSharingReadWrite:(BOOL)arg1 ;
-(void)_migrateShare;
-(void)_copyShare;
-(id)shareMigrationCompletionBlock;
-(void)setShareMigrationCompletionBlock:(id)arg1 ;
@end

