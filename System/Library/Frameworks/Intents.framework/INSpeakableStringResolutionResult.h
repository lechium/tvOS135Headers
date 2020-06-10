/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INSpeakableStringResolutionResultExport.h>

@class NSString;

@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)successWithResolvedString:(id)arg1 ;
+(id)disambiguationWithStringsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithStringToConfirm:(id)arg1 ;
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

