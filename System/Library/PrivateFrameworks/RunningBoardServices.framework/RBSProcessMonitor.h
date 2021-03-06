/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessMonitorConfiguration, NSMutableDictionary, RBSProcessPredicate, NSSet;

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring> {

	os_unfair_lock_s _lock;
	id<RBSServiceLocalProtocol> _service;
	BOOL _valid;
	BOOL _configuring;
	RBSProcessMonitorConfiguration* _configuration;
	NSMutableDictionary* _stateByIdentity;

}

@property (nonatomic,copy,readonly) RBSProcessPredicate * predicate; 
@property (nonatomic,readonly) RBSProcessMonitorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) unsigned serviceClass; 
@property (nonatomic,copy,readonly) NSSet * states; 
+(id)monitor;
+(id)monitorWithConfiguration:(/*^block*/id)arg1 ;
+(id)monitorWithPredicate:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(RBSProcessMonitorConfiguration *)configuration;
-(void)setServiceClass:(unsigned)arg1 ;
-(void)setPredicates:(id)arg1 ;
-(void)setStateDescriptor:(id)arg1 ;
-(void)setUpdateHandler:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(/*^block*/id)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(unsigned)serviceClass;
-(NSSet *)states;
-(id)predicates;
-(void)_reconnect;
-(void)_handleProcessStateChange:(id)arg1 ;
@end

