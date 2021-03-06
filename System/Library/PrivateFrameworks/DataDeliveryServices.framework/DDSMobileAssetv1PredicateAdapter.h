/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DDSMobileAssetv1PredicateAdapter : NSObject
+(id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 acceptUnspecifiedAttribute:(BOOL)arg4 lenientMatch:(BOOL)arg5 ;
+(id)predicateForAssetQuery:(id)arg1 compatiblilityVersion:(unsigned long long)arg2 ;
+(id)predicateForQuery:(id)arg1 compatibilityVersion:(unsigned long long)arg2 internalInstall:(BOOL)arg3 ;
+(id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 ;
+(id)compatibilityPredicateForCompatabilityVersion:(unsigned long long)arg1 internalInstall:(BOOL)arg2 ;
+(id)regionKeys;
+(id)predicateForKey:(id)arg1 matchingString:(id)arg2 ;
+(id)extractRegionDictFromFilter:(id)arg1 ;
@end

