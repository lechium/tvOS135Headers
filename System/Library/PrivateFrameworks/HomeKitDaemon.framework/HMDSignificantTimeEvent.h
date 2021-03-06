/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class NSString, NSDateComponents, NSUUID, NSSet;

@interface HMDSignificantTimeEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (nonatomic,retain) NSString * significantEvent;                                     //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,retain) NSDateComponents * offset;                                       //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)offset;
-(void)setOffset:(NSDateComponents *)arg1 ;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)_nextTimerDate;
-(id)metricData;
@end

