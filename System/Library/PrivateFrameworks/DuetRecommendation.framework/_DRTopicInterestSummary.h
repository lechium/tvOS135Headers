/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetRecommendation/DuetRecommendation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying> {

	unsigned long long _topicSelectionsCount;
	unsigned long long _topicPresentationsCount;

}

@property (assign) unsigned long long topicPresentationsCount;              //@synthesize topicPresentationsCount=_topicPresentationsCount - In the implementation block
@property (assign) unsigned long long topicSelectionsCount;                 //@synthesize topicSelectionsCount=_topicSelectionsCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2 ;
-(unsigned long long)topicSelectionsCount;
-(unsigned long long)topicPresentationsCount;
-(void)setTopicPresentationsCount:(unsigned long long)arg1 ;
-(void)setTopicSelectionsCount:(unsigned long long)arg1 ;
@end

