/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTrigger.h>
#import <libobjc.A.dylib/HMDEventDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSPredicate, NSArray, HMDPredicateUtilities, HMDEventTriggerExecutionSession, HMDEventTriggerUserConfirmationSession, NSString;

@interface HMDEventTrigger : HMDTrigger <HMDEventDelegate, HMFLogging> {

	BOOL _migratedEventsToRecords;
	BOOL _executeOnce;
	NSMutableArray* _events;
	NSPredicate* _evaluationCondition;
	NSArray* _recurrences;
	HMDPredicateUtilities* _predicateUtilities;
	HMDEventTriggerExecutionSession* _executionSession;
	HMDEventTriggerUserConfirmationSession* _userConfirmationSession;
	unsigned long long _activationType;
	unsigned long long _activationState;

}

@property (nonatomic,readonly) NSArray * characteristicEvents; 
@property (nonatomic,readonly) NSArray * characteristicBaseEvents; 
@property (nonatomic,readonly) NSArray * locationEvents; 
@property (nonatomic,readonly) NSArray * calendarEvents; 
@property (nonatomic,readonly) NSArray * significantTimeEvents; 
@property (nonatomic,readonly) NSArray * timeEvents; 
@property (nonatomic,readonly) NSArray * durationEvents; 
@property (nonatomic,readonly) NSArray * charThresholdEvents; 
@property (nonatomic,readonly) NSArray * presenceEvents; 
@property (nonatomic,readonly) NSArray * triggerEvents; 
@property (nonatomic,readonly) NSArray * endEvents; 
@property (nonatomic,readonly) NSMutableArray * events;                                                     //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSPredicate * evaluationCondition;                                             //@synthesize evaluationCondition=_evaluationCondition - In the implementation block
@property (nonatomic,readonly) NSArray * recurrences;                                                       //@synthesize recurrences=_recurrences - In the implementation block
@property (assign,nonatomic) BOOL executeOnce;                                                              //@synthesize executeOnce=_executeOnce - In the implementation block
@property (nonatomic,retain) HMDPredicateUtilities * predicateUtilities;                                    //@synthesize predicateUtilities=_predicateUtilities - In the implementation block
@property (nonatomic,retain) HMDEventTriggerExecutionSession * executionSession;                            //@synthesize executionSession=_executionSession - In the implementation block
@property (nonatomic,retain) HMDEventTriggerUserConfirmationSession * userConfirmationSession;              //@synthesize userConfirmationSession=_userConfirmationSession - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;                                             //@synthesize activationType=_activationType - In the implementation block
@property (assign,nonatomic) unsigned long long activationState;                                            //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL computedActive; 
@property (assign,nonatomic) BOOL migratedEventsToRecords;                                                  //@synthesize migratedEventsToRecords=_migratedEventsToRecords - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)__validateRecurrences:(id)arg1 ;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)triggerType;
-(void)removeService:(id)arg1 ;
-(unsigned long long)activationState;
-(NSMutableArray *)events;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)recurrences;
-(void)timerFired:(id)arg1 ;
-(id)dumpState;
-(void)_removeEvents:(id)arg1 ;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(void)setActivationState:(unsigned long long)arg1 ;
-(BOOL)executeOnce;
-(NSArray *)endEvents;
-(void)removeAccessory:(id)arg1 ;
-(NSArray *)triggerEvents;
-(void)removeCharacteristic:(id)arg1 ;
-(BOOL)shouldActivateOnLocalDevice;
-(id)emptyModelObject;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(void)_registerForMessages;
-(BOOL)shouldEncodeLastFireDate:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(id)messageReceiverChildren;
-(id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 ;
-(BOOL)requiresDataVersion4;
-(BOOL)compatible:(id)arg1 user:(id)arg2 ;
-(void)fixupForReplacementAccessory:(id)arg1 ;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSArray *)characteristicEvents;
-(void)setEvaluationCondition:(NSPredicate *)arg1 ;
-(BOOL)addEventsFromMessage:(id)arg1 ;
-(id)metric:(BOOL)arg1 ;
-(BOOL)checkSharedEventTriggerActivationResidentRequirement:(id)arg1 ;
-(void)removeUser:(id)arg1 ;
-(BOOL)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1 ;
-(BOOL)isEventTriggerOnLocalDeviceForAccessory:(id)arg1 ;
-(NSArray *)characteristicBaseEvents;
-(unsigned long long)activationType;
-(void)takeOverOwnershipOfTrigger;
-(void)processEventRecords:(id)arg1 message:(id)arg2 ;
-(id)didOccurEvent:(id)arg1 causingDevice:(id)arg2 ;
-(void)setExecutionSession:(HMDEventTriggerExecutionSession *)arg1 ;
-(HMDEventTriggerExecutionSession *)executionSession;
-(NSPredicate *)evaluationCondition;
-(HMDPredicateUtilities *)predicateUtilities;
-(NSArray *)calendarEvents;
-(NSArray *)significantTimeEvents;
-(NSArray *)presenceEvents;
-(NSArray *)charThresholdEvents;
-(NSArray *)locationEvents;
-(void)setActivationType:(unsigned long long)arg1 ;
-(BOOL)computedActive;
-(void)_reevaluateIfRelaunchRequired;
-(void)_computeActivation;
-(void)_activateEvents:(/*^block*/id)arg1 ;
-(void)_migrateEventsToRecords;
-(BOOL)migratedEventsToRecords;
-(void)setMigratedEventsToRecords:(BOOL)arg1 ;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg1 ;
-(void)_handleUpdateEventTriggerCondition:(id)arg1 ;
-(void)_handleUpdateEventTriggerRecurrences:(id)arg1 ;
-(void)_handleUpdateEventTriggerExecuteOnce:(id)arg1 ;
-(void)_handleAddEventToEventTrigger:(id)arg1 ;
-(void)_handleRemoveEventsFromEventTrigger:(id)arg1 ;
-(void)_handleUpdateEventsOnEventTrigger:(id)arg1 ;
-(void)_handleUserPermissionRequest:(id)arg1 ;
-(void)_handleUpdateOwningDevice:(id)arg1 ;
-(void)_handleCharacteristicRemove:(id)arg1 eventsToRemove:(id)arg2 ;
-(void)_updateCondition:(id)arg1 ;
-(void)_handleRemoveEventsFromEventTrigger:(id)arg1 relay:(BOOL)arg2 ;
-(void)_addEventToEventTrigger:(id)arg1 ;
-(id)createEventModel:(id)arg1 endEvent:(BOOL)arg2 message:(id)arg3 checkForSupport:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_checkAddEventModel:(id)arg1 message:(id)arg2 ;
-(void)_removeEventsFromEventTrigger:(id)arg1 ;
-(id)_updateEventsOnEventTrigger:(id)arg1 ;
-(void)_updateEventTriggerRecurrences:(id)arg1 ;
-(void)_updateEventTriggerCondition:(id)arg1 ;
-(void)_updateOwningDevice:(id)arg1 ;
-(void)_updateEventTriggerExecuteOnce:(id)arg1 ;
-(void)_resetExecutionState;
-(HMDEventTriggerUserConfirmationSession *)userConfirmationSession;
-(void)setUserConfirmationSession:(HMDEventTriggerUserConfirmationSession *)arg1 ;
-(void)_userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventTriggerUpdate:(id)arg1 message:(id)arg2 ;
-(void)_handleAddEventModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveEventModel:(id)arg1 message:(id)arg2 ;
-(void)_evaluationConditionUpdated:(id)arg1 message:(id)arg2 ;
-(void)_eventTriggerRecurrencesUpdated:(id)arg1 message:(id)arg2 ;
-(void)_executeOnceUpdated:(id)arg1 message:(id)arg2 ;
-(NSArray *)timeEvents;
-(BOOL)containsRecurrences;
-(NSArray *)durationEvents;
-(void)executionComplete:(id)arg1 error:(id)arg2 ;
-(void)resetExecutionState;
-(void)setPredicateUtilities:(HMDPredicateUtilities *)arg1 ;
@end

