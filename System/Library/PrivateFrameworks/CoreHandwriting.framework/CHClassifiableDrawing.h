/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject {

	BOOL _expandCodePoints;
	BOOL _firstPointIsSubstrokeCut;
	BOOL _lastPointIsSubstrokeCut;
	CHDrawing* _drawing;
	NSCharacterSet* _characterSet;
	unsigned long long _maxCandidateCount;
	CGRect _normalizationContext;

}

@property (nonatomic,retain,readonly) CHDrawing * drawing;                        //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain,readonly) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
@property (nonatomic,readonly) BOOL expandCodePoints;                             //@synthesize expandCodePoints=_expandCodePoints - In the implementation block
@property (nonatomic,readonly) CGRect normalizationContext;                       //@synthesize normalizationContext=_normalizationContext - In the implementation block
@property (nonatomic,readonly) BOOL firstPointIsSubstrokeCut;                     //@synthesize firstPointIsSubstrokeCut=_firstPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) BOOL lastPointIsSubstrokeCut;                      //@synthesize lastPointIsSubstrokeCut=_lastPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) unsigned long long maxCandidateCount;              //@synthesize maxCandidateCount=_maxCandidateCount - In the implementation block
-(void)dealloc;
-(NSCharacterSet *)characterSet;
-(id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(BOOL)arg3 normalizationContext:(CGRect)arg4 firstPointIsSubstrokeCut:(BOOL)arg5 lastPointIsSubstrokeCut:(BOOL)arg6 maxCandidateCount:(unsigned long long)arg7 ;
-(CHDrawing *)drawing;
-(BOOL)expandCodePoints;
-(CGRect)normalizationContext;
-(BOOL)firstPointIsSubstrokeCut;
-(BOOL)lastPointIsSubstrokeCut;
-(unsigned long long)maxCandidateCount;
@end

