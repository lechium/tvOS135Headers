/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/void* hashFunction; 
@property (assign) /*function pointer*/void* isEqualFunction; 
@property (assign) /*function pointer*/void* sizeFunction; 
@property (assign) /*function pointer*/void* descriptionFunction; 
@property (assign) /*function pointer*/void* relinquishFunction; 
@property (assign) /*function pointer*/void* acquireFunction; 
@property (assign) BOOL usesStrongWriteBarrier; 
@property (assign) BOOL usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1 ;
-(/*function pointer*/void*)sizeFunction;
-(/*function pointer*/void*)hashFunction;
-(/*function pointer*/void*)isEqualFunction;
-(/*function pointer*/void*)descriptionFunction;
-(/*function pointer*/void*)acquireFunction;
-(/*function pointer*/void*)relinquishFunction;
-(BOOL)usesStrongWriteBarrier;
-(BOOL)usesWeakReadAndWriteBarriers;
@end
