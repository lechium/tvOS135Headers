/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator {

	id* objects;
	unsigned long long capacity;
	unsigned long long index;

}
-(id)nextObject;
-(id)allObjects;
-(id)initWithArray:(id*)arg1 capacity:(unsigned long long)arg2 ;
@end

