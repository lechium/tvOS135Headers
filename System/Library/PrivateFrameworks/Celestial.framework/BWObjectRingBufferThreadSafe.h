/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {

	OpaqueFigReentrantMutexRef _lock;

}
-(id)description;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)clear;
-(id)firstObject;
-(id)lastObject;
-(void)setCapacity:(int)arg1 ;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)firstTime;
-(SCD_Struct_BW2)lastTime;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW2)arg1 until:(SCD_Struct_BW2)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW2)arg1 ;
@end

