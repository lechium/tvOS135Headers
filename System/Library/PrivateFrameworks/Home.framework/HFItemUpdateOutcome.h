/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSArray;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _results;
	unsigned long long _outcomeType;

}

@property (assign,nonatomic) unsigned long long outcomeType;              //@synthesize outcomeType=_outcomeType - In the implementation block
@property (nonatomic,readonly) NSDictionary * results;                    //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
+(id)outcomeWithResults:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSArray *)allKeys;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)results;
-(id)initWithResults:(id)arg1 ;
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)outcomeType;
-(void)setOutcomeType:(unsigned long long)arg1 ;
@end

