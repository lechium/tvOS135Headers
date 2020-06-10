/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSHashTable, NSMapTable, NSPointerArray;

@interface __NSBundleTables : NSObject {

	NSLock* _lock;
	NSHashTable* _staticFrameworks;
	NSHashTable* _loadedBundles;
	NSHashTable* _loadedFrameworks;
	NSMapTable* _resolvedPathToBundles;
	NSMapTable* _bundleForClassMap;
	NSPointerArray* _immortalBundles;

}
+(id)bundleTables;
-(id)init;
-(void)dealloc;
-(id)bundleForPath:(id)arg1 ;
-(id)addBundle:(id)arg1 forPath:(id)arg2 withType:(unsigned long long)arg3 forClass:(Class)arg4 isImmortal:(BOOL)arg5 ;
-(id)bundleForClass:(Class)arg1 ;
-(id)loadedBundles;
-(id)allBundles;
-(void)addStaticFrameworkBundles:(id)arg1 ;
-(id)allFrameworks;
-(void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3 ;
@end

