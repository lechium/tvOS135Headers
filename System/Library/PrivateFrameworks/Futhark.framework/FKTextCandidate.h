/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FKTextCandidate : NSObject {

	float _confidence;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (readonly) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(float)arg2 ;
@end
