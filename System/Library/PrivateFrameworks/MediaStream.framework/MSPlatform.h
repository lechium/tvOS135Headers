/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPlatform <NSObject>
@optional
-(id)pushToken;
-(Class)deletePluginClass;
-(void)didDetectUnrecoverableCondition;
-(id)contentURLForPersonID:(id)arg1;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)policyMaySendDelete;
-(BOOL)isPerformanceLoggingEnabled;
-(id)pushTokenForPersonID:(id)arg1;

@required
-(Class)subscriberPluginClass;
-(Class)publisherPluginClass;
-(BOOL)policyMayUpload;
-(id)baseURLForPersonID:(id)arg1;
-(BOOL)policyMayDownload;
-(id)pathMediaStreamDir;
-(id)socketOptions;
-(id)authTokenForPersonID:(id)arg1;
-(id)theDaemon;
-(id)appBundleInfoString;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7;
-(id)UDID;
-(id)OSString;
-(id)hardwareString;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;

@end

