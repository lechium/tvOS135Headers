/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REClassLoaderConfiguration.h>

@class NSString;

@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2 ;
@end

