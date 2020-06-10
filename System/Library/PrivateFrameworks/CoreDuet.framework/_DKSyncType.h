/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _DKSyncType : NSObject <NSSecureCoding> {

	BOOL _isSingleDevice;
	BOOL _forceSync;
	BOOL _isInitialSync;
	BOOL _isPeriodicSync;
	BOOL _isTriggeredSync;
	BOOL _didActivatePeer;
	BOOL _didReceivePush;
	BOOL _didAddSyncedEvents;
	BOOL _didDeleteSyncedEvents;
	unsigned long long _urgency;
	double _periodicSyncInterval;
	NSObject*<OS_xpc_object> _xpcActivity;

}

@property (nonatomic,readonly) BOOL isSingleDevice;                             //@synthesize isSingleDevice=_isSingleDevice - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                    //@synthesize forceSync=_forceSync - In the implementation block
@property (assign,nonatomic) BOOL isInitialSync;                                //@synthesize isInitialSync=_isInitialSync - In the implementation block
@property (assign,nonatomic) BOOL isPeriodicSync;                               //@synthesize isPeriodicSync=_isPeriodicSync - In the implementation block
@property (assign,nonatomic) BOOL isTriggeredSync;                              //@synthesize isTriggeredSync=_isTriggeredSync - In the implementation block
@property (assign,nonatomic) unsigned long long urgency;                        //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic) BOOL didActivatePeer;                              //@synthesize didActivatePeer=_didActivatePeer - In the implementation block
@property (assign,nonatomic) BOOL didReceivePush;                               //@synthesize didReceivePush=_didReceivePush - In the implementation block
@property (assign,nonatomic) BOOL didAddSyncedEvents;                           //@synthesize didAddSyncedEvents=_didAddSyncedEvents - In the implementation block
@property (assign,nonatomic) BOOL didDeleteSyncedEvents;                        //@synthesize didDeleteSyncedEvents=_didDeleteSyncedEvents - In the implementation block
@property (assign,nonatomic) double periodicSyncInterval;                       //@synthesize periodicSyncInterval=_periodicSyncInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;              //@synthesize xpcActivity=_xpcActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)urgency;
-(void)setUrgency:(unsigned long long)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(BOOL)isSingleDevice;
-(BOOL)isPeriodicSync;
-(BOOL)forceSync;
-(BOOL)isTriggeredSync;
-(BOOL)didReceivePush;
-(id)initWithIsSingleDevice:(BOOL)arg1 ;
-(void)setForceSync:(BOOL)arg1 ;
-(void)mergeType:(id)arg1 ;
-(BOOL)isInitialSync;
-(BOOL)didActivatePeer;
-(void)setIsInitialSync:(BOOL)arg1 ;
-(void)setIsPeriodicSync:(BOOL)arg1 ;
-(void)setPeriodicSyncInterval:(double)arg1 ;
-(BOOL)isEqualToSyncType:(id)arg1 ;
-(void)setIsTriggeredSync:(BOOL)arg1 ;
-(void)setDidReceivePush:(BOOL)arg1 ;
-(void)setDidDeleteSyncedEvents:(BOOL)arg1 ;
-(double)periodicSyncInterval;
-(BOOL)didAddSyncedEvents;
-(BOOL)didDeleteSyncedEvents;
-(void)setDidActivatePeer:(BOOL)arg1 ;
-(void)setDidAddSyncedEvents:(BOOL)arg1 ;
@end
