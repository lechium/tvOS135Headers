//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSMediaStreamDaemon, NSData, NSDictionary, NSString, NSURL;

@protocol MSPlatform <NSObject>
- (MSMediaStreamDaemon *)theDaemon;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSDictionary *)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (NSString *)appBundleInfoString;
- (NSString *)OSString;
- (NSString *)hardwareString;
- (NSString *)UDID;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (NSString *)pathMediaStreamDir;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(char *)arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(char *)arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;

@optional
- (_Bool)isPerformanceLoggingEnabled;
- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (_Bool)shouldEnableNewFeatures;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (_Bool)policyMaySendDelete;
- (void)didDetectUnrecoverableCondition;
- (Class)deletePluginClass;
@end

