/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PXUserEventTrackerCommon : NSObject {

	id _currentSessionSender;
	unsigned long long _currentSessionSource;
	unsigned long long _currentSessionTab;
	double _currentLogStateStartDate;
	double _currentLogSubStateStartDate;
	double _currentLogSubSubStateStartDate;
	BOOL _applicationIsInForeground;
	unsigned long long _currentTab;
	BOOL _enableDetailedDebugLogging;
	unsigned long long _currentLogState;
	unsigned long long _currentLogSubState;
	unsigned long long _currentLogSubSubState;

}

@property (assign,nonatomic) unsigned long long currentLogState;                               //@synthesize currentLogState=_currentLogState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLogSubState;                            //@synthesize currentLogSubState=_currentLogSubState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLogSubSubState;                         //@synthesize currentLogSubSubState=_currentLogSubSubState - In the implementation block
@property (assign,setter=setCurrentTab:,nonatomic) unsigned long long currentTab;              //@synthesize currentTab=_currentTab - In the implementation block
@property (nonatomic,readonly) BOOL enableDetailedDebugLogging;                                //@synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging - In the implementation block
-(id)init;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)willViewMemoriesFeedView;
-(void)didFinishViewingMemoriesFeedView;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1 ;
-(void)logViewCountForLogState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubSubState:(unsigned long long)arg1 ;
-(void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logImpressionCountForEventSource:(unsigned long long)arg1 ;
-(void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(BOOL)arg3 ;
-(void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(BOOL)arg4 ;
-(void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1 ;
-(id)PXLogStateDescription:(unsigned long long)arg1 ;
-(id)PXLogSubStateDescription:(unsigned long long)arg1 ;
-(id)PXLogSubSubStateDescription:(unsigned long long)arg1 ;
-(unsigned long long)currentTab;
-(void)setCurrentTab:(unsigned long long)arg1 ;
-(BOOL)enableDetailedDebugLogging;
-(unsigned long long)currentLogState;
-(void)setCurrentLogState:(unsigned long long)arg1 ;
-(unsigned long long)currentLogSubState;
-(void)setCurrentLogSubState:(unsigned long long)arg1 ;
-(unsigned long long)currentLogSubSubState;
-(void)setCurrentLogSubSubState:(unsigned long long)arg1 ;
@end
