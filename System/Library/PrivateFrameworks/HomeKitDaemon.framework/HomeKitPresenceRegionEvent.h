/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitPresenceRegion, NSString;

@interface HomeKitPresenceRegionEvent : HMDLogEvent <HMDAWDLogEvent> {

	AWDHomeKitPresenceRegion* _metric;

}

@property (nonatomic,readonly) AWDHomeKitPresenceRegion * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)init;
-(AWDHomeKitPresenceRegion *)metric;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

