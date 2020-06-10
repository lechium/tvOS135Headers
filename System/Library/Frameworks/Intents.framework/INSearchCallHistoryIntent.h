/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchCallHistoryIntentExport.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic,readonly) long long callType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) INPerson * recipient; 
@property (nonatomic,readonly) unsigned long long callCapabilities; 
@property (nonatomic,readonly) unsigned long long callTypes; 
@property (nonatomic,copy,readonly) NSNumber * unseen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long preferredCallProvider; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(void)setRecipient:(INPerson *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(INPerson *)recipient;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4 ;
-(long long)callType;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 ;
-(unsigned long long)callCapabilities;
-(unsigned long long)callTypes;
-(NSNumber *)unseen;
-(void)setUnseen:(NSNumber *)arg1 ;
-(void)setCallCapabilities:(unsigned long long)arg1 ;
-(void)setCallTypes:(unsigned long long)arg1 ;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5 ;
@end

