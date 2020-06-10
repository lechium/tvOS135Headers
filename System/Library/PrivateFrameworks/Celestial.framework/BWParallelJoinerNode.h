/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {

	int _inputsCount;
	NSMutableDictionary* _receivedBuffers;
	NSMutableDictionary* _sentErrorCountForID;

}
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned)arg2 ;
@end
