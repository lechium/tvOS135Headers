/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchUpdateResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned long long _resultType;

}

@property (readonly) id result;                                  //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(void)dealloc;
-(id)result;
-(unsigned long long)resultType;
-(id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
@end

