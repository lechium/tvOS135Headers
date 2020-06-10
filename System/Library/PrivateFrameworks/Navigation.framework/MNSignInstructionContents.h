/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNListInstructionContents.h>
#import <libobjc.A.dylib/MNInstructionContents.h>

@class NSString, NSArray;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {

	NSArray* _mergeFormats;
	NSArray* _continueFormats;
	NSArray* _maneuverFormats;

}

@property (nonatomic,retain) NSArray * mergeFormats;                 //@synthesize mergeFormats=_mergeFormats - In the implementation block
@property (nonatomic,retain) NSArray * continueFormats;              //@synthesize continueFormats=_continueFormats - In the implementation block
@property (nonatomic,retain) NSArray * maneuverFormats;              //@synthesize maneuverFormats=_maneuverFormats - In the implementation block
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 ;
-(id)description;
-(long long)context;
-(void)_populateFromStep:(id)arg1 ;
-(void)setMergeFormats:(NSArray *)arg1 ;
-(void)setContinueFormats:(NSArray *)arg1 ;
-(void)setManeuverFormats:(NSArray *)arg1 ;
-(NSArray *)maneuverFormats;
-(id)_instructionsForFormats:(id)arg1 ;
-(NSArray *)mergeFormats;
-(NSArray *)continueFormats;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)hasServerContent;
@end

