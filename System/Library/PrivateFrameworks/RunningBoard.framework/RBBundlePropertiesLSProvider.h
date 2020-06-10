/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBBundlePropertiesLSProviderDelegate;
@class NSCache, NSString;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BSDescriptionProviding> {

	NSCache* _propertiesByIdentity;
	id<RBBundlePropertiesLSProviderDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesLSProviderDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<RBBundlePropertiesLSProviderDelegate>)delegate;
-(void)setDelegate:(id<RBBundlePropertiesLSProviderDelegate>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)propertiesForIdentity:(id)arg1 ;
-(void)_removeCachedValuesForAppProxies:(id)arg1 ;
@end
