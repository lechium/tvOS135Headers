/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {

	RERelevanceCondition* _condition;

}

@property (nonatomic,readonly) RERelevanceCondition * condition; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(RERelevanceCondition *)condition;
-(float)_evaluateCondition;
-(id)initWithRelevanceCondition:(id)arg1 ;
@end
