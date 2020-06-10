/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRTextRecognitionCandidate : NSObject {

	int _confidenceLevel;
	NSString* _text;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) int confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
-(NSString *)text;
-(int)confidenceLevel;
-(id)initWithText:(id)arg1 confidenceLevel:(int)arg2 ;
@end

