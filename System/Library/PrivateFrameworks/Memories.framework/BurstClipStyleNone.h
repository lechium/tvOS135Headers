/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/BurstClipStyle.h>

@interface BurstClipStyleNone : BurstClipStyle
-(BOOL)isSupported;
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(id)containedClipsWithoutTransitions;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
@end

