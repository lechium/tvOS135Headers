/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, NSString, NSNumber, NSMutableDictionary, ACDAccountStoreFilter;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;
	ACDAccountStoreFilter* _filter;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) ACDAccountStoreFilter * filter;              //@synthesize filter=_filter - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(CFBundleRef)bundle;
-(NSNumber *)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(ACDAccountStoreFilter *)filter;
-(void)setFilter:(ACDAccountStoreFilter *)arg1 ;
-(NSString *)localizedAppName;
-(NSString *)adamOrDisplayID;
-(id)_displayNameFromLaunchServicesForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
@end

