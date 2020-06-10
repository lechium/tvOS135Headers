/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long long _typeSize;

}
-(void)dealloc;
-(int)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW49*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(void*)elementAtIndex:(int)arg1 ;
-(int)lastElementIndex;
-(int)firstElementIndex;
-(int)lastElementIndexPlusOne;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)removeFirstElements:(int)arg1 ;
-(void*)firstElement;
-(void*)lastElement;
@end

