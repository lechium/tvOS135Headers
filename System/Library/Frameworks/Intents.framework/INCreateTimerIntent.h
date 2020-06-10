/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INCreateTimerIntentExport.h>

@class INSpeakableString, NSString;

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * label; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(double)duration;
-(INSpeakableString *)label;
-(void)setLabel:(INSpeakableString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithLabel:(id)arg1 duration:(double)arg2 type:(long long)arg3 ;
@end

