/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeyValueStoreReader : NSObject {

	cdb _cdb;
	int _fd;
	Class _keyType;
	Class _valueType;

}
-(id)init;
-(void)dealloc;
-(void)close;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithKeyType:(Class)arg1 valueType:(Class)arg2 ;
-(BOOL)openAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_readObjectAtOffset:(unsigned)arg1 length:(unsigned)arg2 type:(Class)arg3 error:(id*)arg4 ;
-(BOOL)enumerateKeysAndValuesAndReturnError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)enumerateKeyType:(Class)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enumerateValuesForKey:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)enumerateValuesForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)valueExistsForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 ;
@end

