/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSServiceFacilityManaging.h>

@protocol OS_dispatch_queue;
@class BSServiceDomainSpecification, NSObject, BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {

	BSServiceDomainSpecification* _domain;
	NSObject*<OS_dispatch_queue> _queue;
	BSServiceConnectionListener* _serviceListener;
	NSMutableDictionary* _facilitiesByIdentifier;
	NSMutableSet* _completedMilestones;
	NSMutableDictionary* _suspendedFacilitiesByIdentifier;
	NSMutableSet* _pendingConnects;

}

@property (nonatomic,readonly) BSServiceDomainSpecification * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)run;
-(BSServiceDomainSpecification *)domain;
-(id)_initWithDomain:(id)arg1 ;
-(void)addFacility:(id)arg1 ;
-(void)removeFacility:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3 ;
-(BOOL)_queue_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)_queue_evaluateSuspendedFacility:(id)arg1 ;
-(void)_queue_evaluateSuspendedFacilities;
-(void)noteMilestoneReached:(id)arg1 ;
@end

