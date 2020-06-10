/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPersistentHistoryHelper : NSObject
+(BOOL)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2 ;
@end

