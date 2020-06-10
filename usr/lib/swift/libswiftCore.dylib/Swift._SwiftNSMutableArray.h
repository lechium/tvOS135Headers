/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift._SwiftNativeNSMutableArray.h>

@interface Swift._SwiftNSMutableArray : Swift._SwiftNativeNSMutableArray {

	 contents;

}

@property (readonly,nonatomic) long long count; 
-(id)copyWithZone:(void*)arg1 ;
-(long long)count;
-(void)addObject:(id)arg1 ;
-(long long)countByEnumeratingWithState:(SCD_Struct_Sw0*)arg1 objects:(id*)arg2 count:(long long)arg3 ;
-(id*)objectAtIndex:(long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(SCD_Struct_Sw1)arg2 ;
-(void)setObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)exchangeObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 ;
-(void)removeObjectAtIndex:(long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectsInRange:(SCD_Struct_Sw1)arg1 withObjects:(const id*)arg2 count:(long long)arg3 ;
-(void)removeObjectsInRange:(SCD_Struct_Sw1)arg1 ;
-(void)replaceObjectAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(long long)arg2 atIndex:(long long)arg3 ;
-(long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id*)objectAtIndexedSubscript:(long long)arg1 ;
-(void)removeLastObject;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
@end

