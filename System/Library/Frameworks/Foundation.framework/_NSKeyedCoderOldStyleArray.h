/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	char _type;
	BOOL _decoded;
	char _padding[2];

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjCType:(char)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(char)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
@end
