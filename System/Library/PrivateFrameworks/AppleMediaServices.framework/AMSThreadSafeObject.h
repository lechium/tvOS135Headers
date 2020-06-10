/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AMSThreadSafeObject : NSObject {

	id _object;
	NSObject*<OS_dispatch_queue> _objectAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> objectAccessQueue;              //@synthesize objectAccessQueue=_objectAccessQueue - In the implementation block
@property (nonatomic,retain) id object;                                                   //@synthesize object=_object - In the implementation block
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)objectAccessQueue;
-(id)accessAndSetObjectWithBlock:(/*^block*/id)arg1 ;
-(void)setObjectAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

