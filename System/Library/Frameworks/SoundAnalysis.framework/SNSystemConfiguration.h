/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNSystemConfiguration : NSObject {

	unsigned _channelCount;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)channelCount;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(void)setChannelCount:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 channelCount:(unsigned)arg2 ;
@end
