/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface Swift._SwiftObject : _UKNOWN_SUPERCLASS_ <NSObject> {

	Class isa;
	RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > refCounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)retain;
+(void)release;
+(Class)class;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)autorelease;
+(BOOL)_tryRetain;
+(BOOL)_isDeallocating;
+(unsigned long long)retainCount;
+(BOOL)allowsWeakReference;
+(BOOL)retainWeakReference;
+(id)debugDescription;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(Class)superclass;
+(id)description;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)retain;
-(void)release;
-(id)self;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSZone*)zone;
-(Class)superclass;
-(NSString *)description;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)isNSDate__;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(unsigned long long)_cfTypeID;
-(id)_copyDescription;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
@end
