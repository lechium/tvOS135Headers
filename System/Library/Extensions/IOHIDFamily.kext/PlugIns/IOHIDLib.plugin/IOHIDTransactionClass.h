/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDIUnknown2.h>

@class NSMutableArray, IOHIDDeviceClass;

@interface IOHIDTransactionClass : IOHIDIUnknown2 {

	IOHIDDeviceTransactionInterface* _interface;
	unsigned _direction;
	NSMutableArray* _elements;
	IOHIDDeviceClass* _device;

}
-(void)dealloc;
-(int)clear;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(int)commit;
-(int)addElement:(IOHIDElementRef)arg1 ;
-(int)removeElement:(IOHIDElementRef)arg1 ;
-(void)setDevice:(id)arg1 ;
-(int)setDirection:(unsigned)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getAsyncEventSource:(const void*)arg1 ;
-(int)getDirection:(unsigned*)arg1 ;
-(int)containsElement:(IOHIDElementRef)arg1 value:(char*)arg2 ;
-(int)setValue:(IOHIDElementRef)arg1 value:(IOHIDValueRef)arg2 options:(unsigned)arg3 ;
-(int)getValue:(IOHIDElementRef)arg1 value:(_IOHIDValue*)arg2 options:(unsigned)arg3 ;
@end

