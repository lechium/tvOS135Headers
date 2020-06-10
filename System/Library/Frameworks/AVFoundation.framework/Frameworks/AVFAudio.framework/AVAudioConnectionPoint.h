/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {

	AVAudioNode* _node;
	unsigned long long _bus;
	void* _reserved;

}

@property (nonatomic,__weak,readonly) AVAudioNode * node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long bus;                 //@synthesize bus=_bus - In the implementation block
+(id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(AVAudioNode *)node;
-(unsigned long long)bus;
-(id)initWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
@end

