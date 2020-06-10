/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPIEventSender : NSObject {

	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_queue> _eventSendingQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)sendEventRepresentation:(id)arg1 ;
@end

