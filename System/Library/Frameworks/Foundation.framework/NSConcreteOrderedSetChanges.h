/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOrderedSetChanges.h>

@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges {

	SCD_Struct_NS48* _changes;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)_enumerateChanges:(unsigned long long)arg1 stop:(BOOL*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)changeCount;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
@end

