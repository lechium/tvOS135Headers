/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSiriRemembers : NSObject
+(id)__queue;
+(void)saveInteractionWithInteraction:(id)arg1 ;
+(void)findAppMatchesForIntent:(id)arg1 candidateBundleIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)findAppMatchesForJSONIntent:(id)arg1 candidateBundleIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)findRelativeAppUsageProbabilitiesWithBundleIDs:(id)arg1 days:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)set__queue:(id)arg1 ;
-(id)init;
@end
