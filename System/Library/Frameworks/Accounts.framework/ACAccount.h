/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, ACTrackedSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _accountStore;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _parentAccountIdentifier;
	ACAccount* _parentAccount;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _haveCheckedForClientToken;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	BOOL _visible;
	BOOL _haveCheckedForParentAccount;
	BOOL _haveCheckedForChildAccounts;
	BOOL _wasProvisionedDataclassesReset;
	BOOL _wasEnabledDataclassesReset;

}

@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;               //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                    //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                   //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                        //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (nonatomic,readonly) NSSet * dirtyAccountProperties; 
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties; 
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                      //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSURL *)objectID;
-(NSDate *)creationDate;
-(void)refresh;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)_setAccountStore:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccountType *)accountType;
-(BOOL)isDirty;
-(void)_setObjectID:(id)arg1 ;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(ACAccountStore *)accountStore;
-(NSArray *)childAccounts;
-(ACAccount *)parentAccount;
-(id)qualifiedUsername;
-(id)portableCopy;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccountCredential *)credential;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(NSString *)authenticationType;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(NSString *)accountDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(NSMutableSet *)provisionedDataclasses;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(NSDictionary *)dataclassProperties;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(void)_installCredentialsChangedObserver;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 ;
-(BOOL)authenticated;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)credentialsChanged:(id)arg1 ;
-(NSDictionary *)accountProperties;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSString *)parentAccountIdentifier;
-(NSSet *)dirtyProperties;
-(NSSet *)dirtyAccountProperties;
-(NSSet *)dirtyDataclassProperties;
-(id)_encodeProtobuf;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)_loadAllCachedProperties;
-(BOOL)isVisible;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(BOOL)_useParentForCredentials;
-(id)credentialWithError:(id*)arg1 ;
-(ACAccount *)displayAccount;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(void)reload;
-(void)_loadCachedPropertiesWithoutCredentials;
-(NSString *)clientToken;
-(BOOL)addClientToken:(id)arg1 ;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)fullDescription;
-(void)markAllPropertiesDirty;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)_markCredentialDirty;
-(NSString *)userFullName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsPush;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(id)accountByCleaningThirdPartyTransformations;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(NSString *)shortDebugName;
-(void)_applyDirtyStateFromAccount:(id)arg1 ;
-(BOOL)_isDifferentFrom:(id)arg1 ;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(void)setSecCertificates:(id)arg1 ;
-(id)secCertificates;
-(BOOL)isDataSeparatedAccount;
-(id)personaIdentifier;
-(BOOL)correctPersonaScopedForAccount;
-(id)childCardDAVAccountIdentifier;
-(void)setChildCardDAVAccountIdentifier:(id)arg1 ;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasProvisionedDataclassesReset;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasEnabledDataclassesReset;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
@end

