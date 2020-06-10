/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface DNDSClientDetails : NSObject <NSCopying> {

	BOOL _resolutionContextAssumingDeviceUILocked;
	BOOL _userInteractionClient;
	BOOL _persistentAssertionClient;
	BOOL _syncSuppressedClient;
	NSString* _clientIdentifier;
	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                                                           //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifiers;                                                                                 //@synthesize identifiers=_identifiers - In the implementation block
@property (getter=isResolutionContextAssumingDeviceUILocked,nonatomic,readonly) BOOL resolutionContextAssumingDeviceUILocked;              //@synthesize resolutionContextAssumingDeviceUILocked=_resolutionContextAssumingDeviceUILocked - In the implementation block
@property (getter=isUserInteractionClient,nonatomic,readonly) BOOL userInteractionClient;                                                  //@synthesize userInteractionClient=_userInteractionClient - In the implementation block
@property (getter=isPersistentAssertionClient,nonatomic,readonly) BOOL persistentAssertionClient;                                          //@synthesize persistentAssertionClient=_persistentAssertionClient - In the implementation block
@property (getter=isSyncSuppressedClient,nonatomic,readonly) BOOL syncSuppressedClient;                                                    //@synthesize syncSuppressedClient=_syncSuppressedClient - In the implementation block
+(id)detailsForBundleAtURL:(id)arg1 ;
+(id)detailsForClientIdentifier:(id)arg1 applicationBundleURL:(id)arg2 ;
+(id)_detailsForBundleInfoDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)clientIdentifier;
-(NSArray *)identifiers;
-(BOOL)isResolutionContextAssumingDeviceUILocked;
-(BOOL)isUserInteractionClient;
-(BOOL)isPersistentAssertionClient;
-(BOOL)isSyncSuppressedClient;
-(id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(BOOL)arg3 userInteractionClient:(BOOL)arg4 persistentAssertionClient:(BOOL)arg5 syncSuppressedClient:(BOOL)arg6 ;
@end

