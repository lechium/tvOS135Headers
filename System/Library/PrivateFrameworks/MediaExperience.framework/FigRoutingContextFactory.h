/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigRoutingContextFactory <NSObject>
@optional
-(int)copyDefaultContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@required
-(int)createControlChannelOnlyContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMusicContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMirroringContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createRemoteMusicControllerContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copyContextForUUIDWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createPerAppSecondDisplayContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copyDisplayMenuVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemRemotePoolContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@end

