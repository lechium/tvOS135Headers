/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSMutableArray, PRErrorModel, NSArray;

@interface PRCandidateList : NSObject {

	NSMutableArray* _candidates;
	unsigned long long _maxCount;
	NSRange _defaultReplacementRange;
	PRErrorModel* _errorModel;
	NSArray* _capitalizationDictionaryArray;

}
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)maxCount;
-(void)addCandidate:(id)arg1 ;
-(id)candidates;
-(NSRange)defaultReplacementRange;
-(BOOL)isFull;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4 ;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 errorType:(unsigned long long)arg3 ;
-(void)addReplacementCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5 ;
-(void)addTranspositionCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5 ;
-(id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(NSRange)arg2 customErrorModel:(id)arg3 capitalizationDictionaryArray:(id)arg4 ;
-(void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2 ;
-(void)addCandidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
-(void)addCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
-(id)candidateStrings;
-(id)candidateWithString:(id)arg1 ;
@end
