/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/GSAdditionEnumerating.h>

@class GSTemporaryStorage, NSString, NSError, NSDirectoryEnumerator, NSArray;

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSTemporaryStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOption;
	NSError* _error;
	NSDirectoryEnumerator* _enumerator;
	NSArray* _array;
	unsigned long long _pos;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)nextObject;
-(NSError *)error;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
-(id)_nextURL;
@end

