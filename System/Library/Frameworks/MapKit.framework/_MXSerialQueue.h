/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _MXSerialQueue : NSObject {

	NSObject*<OS_dispatch_group> _previousTaskGroup;

}
+(id)taskInsertionQueue;
+(id)taskCompletionQueue;
+(id)taskQueue;
-(id)init;
-(void)addTask:(/*^block*/id)arg1 ;
@end

