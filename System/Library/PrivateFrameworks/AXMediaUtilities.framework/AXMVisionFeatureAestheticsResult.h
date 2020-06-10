/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding> {

	float _aestheticScore;
	float _wellFramedSubjectScore;
	float _pleasantCompositionScore;
	float _wellChosenBackgroundScore;
	float _noiseScore;
	float _failureScore;

}

@property (nonatomic,readonly) float aestheticScore;                         //@synthesize aestheticScore=_aestheticScore - In the implementation block
@property (nonatomic,readonly) float wellFramedSubjectScore;                 //@synthesize wellFramedSubjectScore=_wellFramedSubjectScore - In the implementation block
@property (nonatomic,readonly) float pleasantCompositionScore;               //@synthesize pleasantCompositionScore=_pleasantCompositionScore - In the implementation block
@property (nonatomic,readonly) float wellChosenBackgroundScore;              //@synthesize wellChosenBackgroundScore=_wellChosenBackgroundScore - In the implementation block
@property (nonatomic,readonly) float noiseScore;                             //@synthesize noiseScore=_noiseScore - In the implementation block
@property (nonatomic,readonly) float failureScore;                           //@synthesize failureScore=_failureScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)wellFramedSubjectScore;
-(float)noiseScore;
-(float)failureScore;
-(float)pleasantCompositionScore;
-(float)aestheticScore;
-(float)wellChosenBackgroundScore;
-(id)initWithVisionAestheticsObservation:(id)arg1 ;
@end

