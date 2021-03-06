/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _UILazyMapTable : NSObject {

	/*^block*/id _mappingBlock;
	NSMapTable* _keysToClientTables;
	NSMapTable* _keysToValues;
	NSMapTable* _valuesToKeys;

}
-(id)description;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keys;
-(id)initWithMappingBlock:(/*^block*/id)arg1 ;
-(id)cachedObjectEnumerable;
-(void)registerClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(BOOL)hasCachedObjectForKey:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(id)cachedObjects;
-(id)keyEnumerable;
@end

