/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaStream/MediaStream-Structs.h>
#import <libobjc.A.dylib/MSPlatform.h>

@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform> {

	BOOL _isPerfLoggingEnabled;
	NSData* _pushToken;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL isPerfLoggingEnabled;                  //@synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thePlatform;
-(id)init;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(Class)subscriberPluginClass;
-(Class)deletePluginClass;
-(Class)publisherPluginClass;
-(void)didDetectUnrecoverableCondition;
-(id)contentURLForPersonID:(id)arg1 ;
-(BOOL)policyMayUpload;
-(id)baseURLForPersonID:(id)arg1 ;
-(BOOL)policyMayDownload;
-(id)pathMediaStreamDir;
-(id)socketOptions;
-(id)authTokenForPersonID:(id)arg1 ;
-(id)theDaemon;
-(BOOL)shouldEnableNewFeatures;
-(id)appBundleInfoString;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4 ;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7 ;
-(Class)pluginClass;
-(BOOL)isPerformanceLoggingEnabled;
-(id)pushTokenForPersonID:(id)arg1 ;
-(id)UDID;
-(id)OSString;
-(id)hardwareString;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2 ;
-(CFStringRef)_facilityStringForFacility:(int)arg1 ;
-(void)_rereadDefaults;
-(id)OSVersion;
-(id)stringForSysctlKey:(id)arg1 ;
-(BOOL)_mayPerformFileTransfer;
-(id)_accountForPersonID:(id)arg1 ;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(BOOL)isPerfLoggingEnabled;
-(void)setIsPerfLoggingEnabled:(BOOL)arg1 ;
@end

