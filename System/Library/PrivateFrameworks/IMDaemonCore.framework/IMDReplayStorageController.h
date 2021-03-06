/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject {

	NSString* _filePath;
	IDSKVStore* _store;

}

@property (nonatomic,retain) IDSKVStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(void)dealloc;
-(NSString *)filePath;
-(void)setStore:(IDSKVStore *)arg1 ;
-(IDSKVStore *)store;
-(id)initWithFilePath:(id)arg1 ;
-(BOOL)storeDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id*)arg2 ;
-(void)deleteReplayDB;
@end

