/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBScore.h>

@class NSString;

@interface TBPopularityScore : NSObject <TBScore> {

	unsigned long long _score;
	NSString* _typeDescription;

}

@property (nonatomic,retain) NSString * typeDescription;              //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) unsigned long long score;                //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)popularityScoreWithValue:(unsigned long long)arg1 ;
-(unsigned long long)score;
-(id)initWithValue:(unsigned long long)arg1 ;
-(void)setScore:(unsigned long long)arg1 ;
-(NSString *)typeDescription;
-(void)setTypeDescription:(NSString *)arg1 ;
@end
