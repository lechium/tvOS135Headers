/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, DMFApplicationPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject {

	BOOL _didFetchInitialPolicies;
	NSDictionary* _policiesByBundleIdentifier;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDictionary * policiesByBundleIdentifier;                               //@synthesize policiesByBundleIdentifier=_policiesByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) DMFApplicationPolicyMonitor * applicationPolicyMonitor;              //@synthesize applicationPolicyMonitor=_applicationPolicyMonitor - In the implementation block
@property (assign,nonatomic) BOOL didFetchInitialPolicies;                                          //@synthesize didFetchInitialPolicies=_didFetchInitialPolicies - In the implementation block
@property (nonatomic,copy,readonly) NSArray * policyTypes;                                          //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1 ;
+(id)communicationBundleIdentifiers;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_categoryForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
+(unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(NSArray *)policyTypes;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)_updatePoliciesByBundleIdentifier;
-(DMFApplicationPolicyMonitor *)applicationPolicyMonitor;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
-(NSDictionary *)policiesByBundleIdentifier;
-(void)setPoliciesByBundleIdentifier:(NSDictionary *)arg1 ;
-(BOOL)didFetchInitialPolicies;
-(void)setDidFetchInitialPolicies:(BOOL)arg1 ;
-(id)requestPoliciesByBundleIdentifierWithError:(id*)arg1 ;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

