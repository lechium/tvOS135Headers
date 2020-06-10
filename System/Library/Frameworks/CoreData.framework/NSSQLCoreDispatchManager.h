/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSMutableArray;

@interface NSSQLCoreDispatchManager : NSObject {

	NSSQLCore* _sqlCore;
	NSMutableArray* _connectionManagers;

}
-(void)dealloc;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)routeStoreRequest:(id)arg1 ;
@end

