/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEducationMode,readonly) BOOL educationMode; 
@property (getter=isHomeEnabled,readonly) BOOL homeEnabled; 
@property (getter=isKeychainSyncEnabled,readonly) BOOL keychainSyncEnabled; 
@property (getter=isManaged,readonly) BOOL managed; 
@property (getter=isEphemeral,readonly) BOOL ephemeral; 
+(id)logCategory;
+(id)sharedSettings;
+(BOOL)supportsCloudSettings;
-(void)synchronize;
-(BOOL)isEphemeral;
-(BOOL)isManaged;
-(id)attributeDescriptions;
-(BOOL)isHomeEnabled;
-(BOOL)isKeychainSyncEnabled;
-(BOOL)isEducationMode;
-(void)updateHomeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
