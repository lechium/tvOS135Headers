/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {

	REContentRanker* _contentRanker;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sentimentForTokens:(id)arg1 ;
-(id)initWithContentRanker:(id)arg1 ;
-(id)sentimentForText:(id)arg1 ;
@end
