/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
-(float)speed;
-(double)aspectRatio;
-(BOOL)isFreezeFrame;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(int)rawSourceDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
@end
