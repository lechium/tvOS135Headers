/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVEditSerializedOutput : NSObject
+(void)initialize;
+(id)sharedSerialOutput;
-(id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2 ;
-(id)serializeVideoComposition:(id)arg1 ;
-(id)serializeAudioMix:(id)arg1 ;
-(void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4 ;
@end

