/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSLanguageDetectorDelegate;
@interface CSLanguageDetector : NSObject {

	id<CSLanguageDetectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLanguageDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSLanguageDetectorDelegate>)delegate;
-(void)setDelegate:(id<CSLanguageDetectorDelegate>)arg1 ;
-(void)cancelCurrentRequest;
-(void)endAudio;
-(void)addSamples:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)recordRecognitionLanguage:(id)arg1 ;
-(void)setMostRecentRecognitionLanguage:(id)arg1 ;
-(void)setInteractionIDforCurrentRequest:(id)arg1 ;
-(void)resetForNewRequest:(id)arg1 ;
@end

