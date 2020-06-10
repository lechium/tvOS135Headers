/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStreamConfig.h>

@interface VCTextStreamConfig : VCMediaStreamConfig {

	unsigned char _numRedundantPayloads;
	BOOL _redEnabled;
	float _txIntervalMin;

}

@property (getter=isRedEnabled,nonatomic,readonly) BOOL redEnabled;              //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                 //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) float txIntervalMin;                                //@synthesize txIntervalMin=_txIntervalMin - In the implementation block
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(float)txIntervalMin;
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
@end

