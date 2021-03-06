/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned priority : 1;
	unsigned status : 1;
} SCD_Struct_IN1;

typedef struct {
	unsigned deviceType : 1;
	unsigned entityType : 1;
	unsigned isExcludeFilter : 1;
	unsigned outerDeviceType : 1;
	unsigned serviceType : 1;
	unsigned subServiceType : 1;
} SCD_Struct_IN2;

typedef struct {
	unsigned shareMode : 1;
} SCD_Struct_IN3;

typedef struct {
	unsigned continueRunning : 1;
	unsigned requestsIntentExecution : 1;
	unsigned waitingForResume : 1;
} SCD_Struct_IN4;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_IN5;

typedef struct {
	unsigned executionContext : 1;
	unsigned intentCategory : 1;
	unsigned backgroundLaunch : 1;
	unsigned confirmed : 1;
	unsigned idiom : 1;
	unsigned isOwnedByCurrentUser : 1;
	unsigned isPrimaryDisplayDisabled : 1;
	unsigned triggerMethod : 1;
	unsigned userConfirmationRequired : 1;
} SCD_Struct_IN6;

typedef struct {
	double width;
	double height;
} SCD_Struct_IN7;

typedef struct {
	unsigned airCirculationMode : 1;
	unsigned climateZone : 1;
	unsigned enableAirConditioner : 1;
	unsigned enableAutoMode : 1;
	unsigned enableClimateControl : 1;
	unsigned enableFan : 1;
	unsigned relativeFanSpeedSetting : 1;
	unsigned relativeTemperatureSetting : 1;
} SCD_Struct_IN8;

typedef struct {
	unsigned field1[8];
} SCD_Struct_IN9;

typedef struct {
	unsigned bloodGlucoseUnit : 1;
	unsigned bloodPressureUnit : 1;
	unsigned energyUnit : 1;
	unsigned heartRateUnit : 1;
	unsigned lengthUnit : 1;
	unsigned massUnit : 1;
	unsigned respiratoryRateUnit : 1;
	unsigned temperatureUnit : 1;
	unsigned timeUnit : 1;
	unsigned volumeUnit : 1;
} SCD_Struct_IN10;

typedef struct {
	unsigned dayOfMonth : 1;
	unsigned dayOfWeek : 1;
	unsigned month : 1;
	unsigned year : 1;
} SCD_Struct_IN11;

typedef struct {
	unsigned canceled : 1;
	unsigned canceledByService : 1;
	unsigned completed : 1;
	unsigned missedPickup : 1;
	unsigned outstanding : 1;
} SCD_Struct_IN12;

typedef struct {
	unsigned startCallIntentCallCapabilityUnsupportedReason : 1;
	unsigned addTasksIntentContactEventTriggerUnsupportedReason : 1;
	unsigned setTaskAttributeIntentContactEventTriggerUnsupportedReason : 1;
	unsigned startCallIntentContactsUnsupportedReason : 1;
	unsigned requestPaymentIntentCurrencyAmountUnsupportedReason : 1;
	unsigned sendPaymentIntentCurrencyAmountUnsupportedReason : 1;
	unsigned customUnsupportedReason : 1;
	unsigned findDeviceAndPlaySoundIntentDeviceUnsupportedReason : 1;
	unsigned createTimerIntentLabelUnsupportedReason : 1;
	unsigned addMediaIntentMediaDestinationUnsupportedReason : 1;
	unsigned addMediaIntentMediaItemsUnsupportedReason : 1;
	unsigned playMediaIntentMediaItemsUnsupportedReason : 1;
	unsigned searchForMediaIntentMediaItemsUnsupportedReason : 1;
	unsigned updateMediaAffinityIntentMediaItemsUnsupportedReason : 1;
	unsigned sendPaymentIntentPayeeUnsupportedReason : 1;
	unsigned requestPaymentIntentPayerUnsupportedReason : 1;
	unsigned playMediaIntentPlaybackSpeedUnsupportedReason : 1;
	unsigned startCallIntentPreferredCallProviderUnsupportedReason : 1;
	unsigned reason : 1;
	unsigned sendMessageIntentRecipientUnsupportedReason : 1;
	unsigned saveHealthSampleIntentRecordDateUnsupportedReason : 1;
	unsigned addTasksIntentTargetTaskListMembersUnsupportedReason : 1;
	unsigned setTimerAttributeIntentTargetTimerUnsupportedReason : 1;
	unsigned deleteTasksIntentTaskListUnsupportedReason : 1;
	unsigned deleteTasksIntentTaskUnsupportedReason : 1;
	unsigned snoozeTasksIntentTaskUnsupportedReason : 1;
	unsigned addTasksIntentTemporalEventTriggerUnsupportedReason : 1;
	unsigned setTaskAttributeIntentTemporalEventTriggerUnsupportedReason : 1;
	unsigned runWorkflowIntentWorkflowUnsupportedReason : 1;
} SCD_Struct_IN13;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFBundle* CFBundleRef;

