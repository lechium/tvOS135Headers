/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioSampleRateConverter : NSObject {

	OpaqueAudioConverterRef _sampleRateConverter;
	float _outBufferScaleFactor;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;

}
+(id)upsampler;
+(id)downsampler;
-(void)dealloc;
-(id)convertSampleRateOfBuffer:(id)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(OpaqueAudioConverterRef)_createSampleRateConverterWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
@end

