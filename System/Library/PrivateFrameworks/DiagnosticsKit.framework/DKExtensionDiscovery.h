/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionRegistry, OS_dispatch_queue;
@class NSString, NSObject, NSCondition, NSSet;

@interface DKExtensionDiscovery : NSObject {

	BOOL _discoveryComplete;
	id<DKExtensionRegistry> _registry;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	NSCondition* _discoveryLock;
	NSSet* _services;

}

@property (nonatomic,retain) id<DKExtensionRegistry> registry;                         //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discoveryQueue;              //@synthesize discoveryQueue=_discoveryQueue - In the implementation block
@property (nonatomic,retain) NSCondition * discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (assign,nonatomic) BOOL discoveryComplete;                                   //@synthesize discoveryComplete=_discoveryComplete - In the implementation block
@property (nonatomic,retain) NSSet * services;                                         //@synthesize services=_services - In the implementation block
+(id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(id)arg3 ;
-(NSString *)bundleIdentifier;
-(void)waitUntilComplete;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setServices:(NSSet *)arg1 ;
-(NSSet *)services;
-(id<DKExtensionRegistry>)registry;
-(void)setRegistry:(id<DKExtensionRegistry>)arg1 ;
-(id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_beginExtensionDiscovery;
-(NSCondition *)discoveryLock;
-(void)setDiscoveryComplete:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)_registerExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)discoveryComplete;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDiscoveryLock:(NSCondition *)arg1 ;
@end

