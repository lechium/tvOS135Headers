/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInternal* _audioMix;

}

@property (nonatomic,copy,readonly) NSArray * inputParameters; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)inputParameters;
-(id)_audioMixInputParametersForTrackID:(int)arg1 ;
-(void)setInputParameters:(NSArray *)arg1 ;
@end

