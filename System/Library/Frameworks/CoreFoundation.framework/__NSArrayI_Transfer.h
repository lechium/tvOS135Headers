/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface __NSArrayI_Transfer : NSArray {

	unsigned long long _used;
	id* _list;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
@end

