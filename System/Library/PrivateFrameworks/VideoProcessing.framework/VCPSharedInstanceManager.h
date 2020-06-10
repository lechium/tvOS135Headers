/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VCPSharedInstanceManager : NSObject {

	NSObject*<OS_dispatch_queue> serialQueue_;
	NSMutableDictionary* sharedInstances_;

}
+(id)sharedManager;
-(id)init;
-(void)reset;
-(id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(/*^block*/id)arg2 ;
@end

