/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@protocol OS_dispatch_queue;
@class NSError, NSDictionary, NSObject, NSString;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting> {

	BOOL _available;
	BOOL _shouldRefreshAvailability;
	NSError* _availabilityError;
	NSDictionary* _definition;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;

}

@property (nonatomic,readonly) BOOL shouldRefreshAvailability;                             //@synthesize shouldRefreshAvailability=_shouldRefreshAvailability - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;              //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                             //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventDictionary; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available;                          //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) NSError * availabilityError;                                //@synthesize availabilityError=_availabilityError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isSingleton;
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
+(BOOL)alwaysMakeAvailable;
-(id)init;
-(void)dealloc;
-(NSDictionary *)definition;
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)isAvailable;
-(NSDictionary *)eventDictionary;
-(BOOL)_isAvailable;
-(void)refreshAvailabilityWithNotification;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)refreshAvailabilityWithForcedNotification;
-(NSError *)availabilityError;
-(void)refreshAvailability;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateAvailability:(BOOL)arg1 withError:(id)arg2 ;
-(void)invalidateAvailability;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(id)_availabilityError;
-(BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)arg1 ;
-(void)notifyResourcesAboutAvailabilityChange;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(BOOL)shouldRefreshAvailability;
@end

