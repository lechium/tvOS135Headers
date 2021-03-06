/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/SFAnalytics.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate;

@interface LocalKeychainAnalytics : SFAnalytics {

	BOOL _probablyInClassD;
	NSMutableArray* _pendingReports;
	NSObject*<OS_dispatch_queue> _queue;
	int _notificationToken;
	NSDate* _backupStartTime;
	int _backupType;

}
+(id)databasePath;
-(id)init;
-(BOOL)canPersistMetrics;
-(void)processPendingMessages;
-(void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4 ;
-(void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2 ;
-(void)reportKeychainBackupStartWithType:(int)arg1 ;
-(void)reportKeychainBackupEnd:(BOOL)arg1 error:(id)arg2 ;
@end

