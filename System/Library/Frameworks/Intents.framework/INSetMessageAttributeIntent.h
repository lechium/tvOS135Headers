/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetMessageAttributeIntentExport.h>

@class NSArray, NSString;

@interface INSetMessageAttributeIntent : INIntent <INSetMessageAttributeIntentExport>

@property (nonatomic,copy,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) long long attribute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(long long)attribute;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)identifiers;
-(id)_dictionaryRepresentation;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setAttribute:(long long)arg1 ;
-(id)initWithIdentifiers:(id)arg1 attribute:(long long)arg2 ;
@end

