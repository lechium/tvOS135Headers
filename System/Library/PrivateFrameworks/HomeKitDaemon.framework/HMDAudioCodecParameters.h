/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDAudioCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _audioChannelCount;
	NSArray* _bitRateSettings;
	NSArray* _audioSampleRates;
	NSNumber* _rtpPtime;

}

@property (nonatomic,copy,readonly) NSNumber * audioChannelCount;              //@synthesize audioChannelCount=_audioChannelCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bitRateSettings;                 //@synthesize bitRateSettings=_bitRateSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSampleRates;                //@synthesize audioSampleRates=_audioSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtpPtime;                       //@synthesize rtpPtime=_rtpPtime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)audioChannelCount;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)bitRateSettings;
-(NSArray *)audioSampleRates;
-(NSNumber *)rtpPtime;
-(id)initWithChannelCount:(id)arg1 bitRateSetting:(id)arg2 audioSampleRate:(id)arg3 rtpPtime:(id)arg4 ;
@end

