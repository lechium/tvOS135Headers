//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SWCRedactedDescription-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, SWCPatternList, SWCSubstitutionVariableList, _SWCApplicationIdentifier, _SWCDomain, _SWCServiceSpecifier;

@interface SWCEntry : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    NSData *_lastErrorJSON;	// 8 = 0x8
    struct SWCFields _fields;	// 16 = 0x10
    _SWCApplicationIdentifier *_applicationIdentifier;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    _SWCDomain *_domain;	// 40 = 0x28
    NSString *_applicationVersion;	// 48 = 0x30
    SWCPatternList *_patterns;	// 56 = 0x38
    SWCSubstitutionVariableList *_substitutionVariables;	// 64 = 0x40
    NSDate *_lastCheckedDate;	// 72 = 0x48
    NSNumber *_retryCount;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000df70
+ (void)canonicalizeEntries:(id)arg1;	// IMP=0x000000010000dd98
+ (id)new;	// IMP=0x000000010000dd8c
+ (id)entriesForBundleProxy:(id)arg1 enterpriseContext:(id)arg2;	// IMP=0x000000010000ff9c
+ (void)enumerateJSONResourceURLsForBundleURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000109c8
+ (id)entriesForJSONObject:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100010874
+ (id)_associatedDomainsFromEntitlementForBundleProxy:(id)arg1;	// IMP=0x000000010000f8f8
+ (_Bool)_isBundleProxy:(id)arg1 linkedOnOrAfter:(id)arg2;	// IMP=0x000000010000f7f8
+ (id)_log;	// IMP=0x000000010000f7b8
+ (void)_addEntriesToOrderedSet:(id)arg1 forService:(id)arg2 fromAppsArray:(id)arg3 domain:(id)arg4;	// IMP=0x000000010000eb7c
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;	// IMP=0x000000010000ea1c
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsArray:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;	// IMP=0x000000010000e844
+ (void)_addEntryToOrderedSet:(id)arg1 forUniversalLinksFromSingleDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;	// IMP=0x000000010000e35c
+ (id)_entriesFromBuiltInJSONForBundleProxy:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x000000010000e084
+ (void)_enumerateJSONFilesForBundleProxy:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010000df78
- (void).cxx_destruct;	// IMP=0x000000010000dbb0
@property(copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDate *lastCheckedDate; // @synthesize lastCheckedDate=_lastCheckedDate;
@property(retain) SWCSubstitutionVariableList *substitutionVariables; // @synthesize substitutionVariables=_substitutionVariables;
@property(retain) SWCPatternList *patterns; // @synthesize patterns=_patterns;
@property(copy) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, copy) _SWCDomain *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *service; // @synthesize service=_service;
@property(readonly, copy) _SWCApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000d5e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000d488
- (id)redactedDescription;	// IMP=0x000000010000d278
- (id)debugDescription;	// IMP=0x000000010000d1cc
- (id)description;	// IMP=0x000000010000cec0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000cc70
- (unsigned long long)hash;	// IMP=0x000000010000cb70
@property(copy, nonatomic) NSError *lastError;
@property(readonly) NSDate *nextCheckDate;
@property(readonly, getter=isDownloadable) _Bool downloadable;
@property(readonly) struct SWCFields *fields;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 matchingPattern:(id *)arg2;	// IMP=0x000000010000c2dc
- (void)canonicalizeWithObjectCache:(id)arg1;	// IMP=0x000000010000c238
- (void)canonicalizeObjectAtAddress:(id *)arg1 objectCache:(id)arg2;	// IMP=0x000000010000c194
@property(readonly) _SWCServiceSpecifier *serviceSpecifier;
- (void)logToFile:(struct __sFILE *)arg1 verbosity:(unsigned char)arg2;	// IMP=0x000000010000bbc0
@property(readonly) NSDictionary *propertyListRepresentation;
- (id)initWithServiceSpecifier:(id)arg1;	// IMP=0x000000010000b80c
- (id)initWithApplicationIdentifier:(id)arg1 service:(id)arg2 domain:(id)arg3;	// IMP=0x000000010000b69c
- (id)init;	// IMP=0x000000010000b66c

@end

