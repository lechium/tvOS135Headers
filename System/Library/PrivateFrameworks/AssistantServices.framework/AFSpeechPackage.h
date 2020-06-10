/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRecognition, AFSpeechAudioAnalytics;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFinal;
	AFSpeechRecognition* _recognition;
	AFSpeechRecognition* _rawRecognition;
	AFSpeechAudioAnalytics* _audioAnalytics;

}

@property (nonatomic,readonly) AFSpeechRecognition * recognition;                    //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,readonly) AFSpeechRecognition * rawRecognition;                 //@synthesize rawRecognition=_rawRecognition - In the implementation block
@property (nonatomic,readonly) AFSpeechAudioAnalytics * audioAnalytics;              //@synthesize audioAnalytics=_audioAnalytics - In the implementation block
@property (nonatomic,readonly) BOOL isFinal;                                         //@synthesize isFinal=_isFinal - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFSpeechAudioAnalytics *)audioAnalytics;
-(AFSpeechRecognition *)recognition;
-(AFSpeechRecognition *)rawRecognition;
-(id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 ;
-(BOOL)isFinal;
@end

