/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBInt64ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(long long)arg1 ;
-(void)removeObjectForKey:(long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const long long*)arg2 count:(unsigned long long)arg3 ;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(BOOL)isInitialized;
-(void)removeAll;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
@end
