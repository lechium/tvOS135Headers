/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(id)retain;
-(oneway void)release;
-(id)self;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1;
-(BOOL)respondsToSelector:(SEL)arg1;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1;
-(BOOL)conformsToProtocol:(id)arg1;
-(NSZone*)zone;
-(Class)superclass;
-(NSString *)description;

@end

