/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>

@class NSPredicate;

@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation {

	NSPredicate* _predicate;
	int _entityType;
	CalDatabase* _database;
	int _fetchIdentifier;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) int fetchIdentifier;              //@synthesize fetchIdentifier=_fetchIdentifier - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)main;
-(id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(CalDatabase*)arg3 fetchIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)fetchIdentifier;
@end

