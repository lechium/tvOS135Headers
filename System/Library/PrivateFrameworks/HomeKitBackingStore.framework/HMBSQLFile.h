/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMBSQLFile : HMFObject
+(id)contexts;
+(id)open:(id)arg1 ;
+(void)close:(id)arg1 ;
+(id)contextLock;
+(void)removeDatastoreAtURL:(id)arg1 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 initializer:(/*^block*/id)arg4 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 using:(Class)arg3 error:(id*)arg4 ;
@end

