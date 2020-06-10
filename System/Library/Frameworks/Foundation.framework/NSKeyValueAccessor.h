/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSKeyValueAccessor : NSObject {

	id _containerClassID;
	NSString* _key;
	unsigned long long _hash;
	/*function pointer*/void* _implementation;
	SEL _selector;
	unsigned long long _extraArgumentCount;
	void* _extraArgument1;
	void* _extraArgument2;
	void* _extraArgument3;

}
-(void)dealloc;
-(SEL)selector;
-(id)key;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(/*function pointer*/void*)arg3 selector:(SEL)arg4 extraArguments:(void**)arg5 count:(unsigned long long)arg6 ;
-(id)containerClassID;
-(unsigned long long)extraArgumentCount;
-(void*)extraArgument1;
-(void*)extraArgument2;
@end

