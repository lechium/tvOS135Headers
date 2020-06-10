/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSMutableSet, NSUserDefaults, NSObject;

@interface DEDPersistence : NSObject {

	NSMutableSet* _bugSessionIdentifiers;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSMutableSet * bugSessionIdentifiers;              //@synthesize bugSessionIdentifiers=_bugSessionIdentifiers - In the implementation block
@property (retain) NSUserDefaults * userDefaults;                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)removeBugSession:(id)arg1 ;
-(void)updateBugSession:(id)arg1 ;
-(id)loadSavedBugSessions;
-(BOOL)canProceedWithDevice:(id)arg1 ;
-(void)setBugSessionIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)bugSessionIdentifiers;
-(id)_indexKeyForBugSessionIdentifier:(id)arg1 ;
-(id)_indexKeyForBugSession:(id)arg1 ;
-(id)loadSavedSessionsFromPlist:(id)arg1 ;
@end

