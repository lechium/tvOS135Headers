/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@protocol AFAudioPowerProviding;
@class NSString;

@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding> {

	id<AFAudioPowerProviding> _previousProvider;

}

@property (assign,nonatomic,__weak) id<AFAudioPowerProviding> previousProvider;              //@synthesize previousProvider=_previousProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServices;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
-(id)getCurrentAudioPowerProvider;
-(id<AFAudioPowerProviding>)previousProvider;
-(void)setPreviousProvider:(id<AFAudioPowerProviding>)arg1 ;
@end

