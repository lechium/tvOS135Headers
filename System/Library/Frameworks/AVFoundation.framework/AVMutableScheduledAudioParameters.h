/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVScheduledAudioParameters.h>

@class AVMutableScheduledAudioParametersInternal;

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters {

	AVMutableScheduledAudioParametersInternal* _mutableScheduledParametersInternal;

}
+(id)scheduledAudioParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 rampMode:(long long)arg4 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
@end

