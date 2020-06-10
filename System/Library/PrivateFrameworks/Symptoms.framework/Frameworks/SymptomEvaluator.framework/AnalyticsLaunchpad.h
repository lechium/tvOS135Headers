/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AnalyticsWorkspaceHealthDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AWDAgent, NSMutableDictionary, NSString;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_queue> launch_queue;
	NSObject*<OS_dispatch_queue> flows_queue;
	NSObject*<OS_dispatch_queue> nets_queue;
	NSObject*<OS_dispatch_queue> nois_queue;
	NSObject*<OS_dispatch_queue> service_queue;
	AWDAgent* awd;
	NSMutableDictionary* _launchParams;

}

@property (nonatomic,retain) NSMutableDictionary * launchParams;              //@synthesize launchParams=_launchParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)clearIntegrityCheckBreadcrumb;
+(void)clearInitialWorkspaceSaveBreadcrumb;
+(id)symptomEvaluatorDatabaseContainerPath;
+(BOOL)launchHealthCheck:(id)arg1 ;
+(void)leaveBreadcrumbForInitialWorkspaceSave;
+(void)leaveBreadcrumbForIntegrityCheck;
+(void)leaveBreadcrumbForDestroyPersistentStore;
+(void)clearDestroyPersistentStoreBreadcrumb;
+(BOOL)foundBreadcrumb:(id)arg1 ;
+(void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)arg1 ;
+(void)appendLaunchTime;
+(BOOL)foundDestroyPersistentStoreBreadcrumb;
+(BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)arg1 ;
+(BOOL)foundInitialWorkspaceSaveBreadcrumb;
+(unsigned long long)integrityCheckBreadcrumbCount;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(void)integrityCheckStarted;
-(void)integrityCheckCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)deleteDatabaseCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)destroyPersistentStoreStarted;
-(void)destroyPersistentStoreCompleted:(BOOL)arg1 error:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(NSMutableDictionary *)launchParams;
-(void)_launchSequence:(id)arg1 ;
-(void)setLaunchParams:(NSMutableDictionary *)arg1 ;
-(void)launchSequence;
@end

