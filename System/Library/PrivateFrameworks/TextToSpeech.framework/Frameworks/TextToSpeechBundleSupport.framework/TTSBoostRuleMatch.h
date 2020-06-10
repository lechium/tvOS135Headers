/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSString, NSArray;

@interface TTSBoostRuleMatch : NSObject {

	NSString* _rule;
	long long _boostRuleIndex;
	NSArray* _groupings;
	NSRange _range;

}

@property (nonatomic,retain) NSString * rule;                       //@synthesize rule=_rule - In the implementation block
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long boostRuleIndex;              //@synthesize boostRuleIndex=_boostRuleIndex - In the implementation block
@property (nonatomic,retain) NSArray * groupings;                   //@synthesize groupings=_groupings - In the implementation block
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)rule;
-(void)setRule:(NSString *)arg1 ;
-(void)setGroupings:(NSArray *)arg1 ;
-(NSArray *)groupings;
-(long long)boostRuleIndex;
-(void)setBoostRuleIndex:(long long)arg1 ;
@end

