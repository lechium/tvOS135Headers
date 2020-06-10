/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject {

	DESRecordStore* _typingDataStore;

}

@property (nonatomic,retain) DESRecordStore * typingDataStore;              //@synthesize typingDataStore=_typingDataStore - In the implementation block
-(id)init;
-(void)storeTypingSession:(id)arg1 containsCP:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldRecordToDES;
-(void)storeAlignedSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRecords:(/*^block*/id)arg1 ;
-(void)clearStoredRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(DESRecordStore *)typingDataStore;
-(void)setTypingDataStore:(DESRecordStore *)arg1 ;
@end

