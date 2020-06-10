/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRMSServiceProvider.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol TVRMSServiceProviderDelegate;
@class NSMutableDictionary, NSNetServiceBrowser, NSString;

@interface TVRMSBonjourServiceProvider : NSObject <TVRMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableDictionary* _services;
	NSMutableDictionary* _cache;
	id<TVRMSServiceProviderDelegate> _delegate;
	NSNetServiceBrowser* _netServiceBrowser;

}

@property (nonatomic,readonly) NSNetServiceBrowser * netServiceBrowser;                     //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (nonatomic,readonly) NSString * searchType; 
@property (nonatomic,readonly) NSString * searchDomain; 
@property (nonatomic,readonly) NSString * searchScope; 
@property (nonatomic,readonly) long long serviceDiscoverySource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVRMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TVRMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<TVRMSServiceProviderDelegate>)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(NSString *)searchType;
-(id)_searchString;
-(NSString *)searchScope;
-(void)endDiscovery;
-(void)beginDiscovery;
-(long long)serviceDiscoverySource;
-(NSString *)searchDomain;
-(id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2 ;
-(id)_identifierForNetService:(id)arg1 ;
-(void)_updateService:(id)arg1 withNetService:(id)arg2 txtData:(id)arg3 ;
-(void)_updateCacheWithService:(id)arg1 identifier:(id)arg2 ;
-(long long)serviceTypeFromTXTDictionary:(id)arg1 ;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
-(NSNetServiceBrowser *)netServiceBrowser;
@end

