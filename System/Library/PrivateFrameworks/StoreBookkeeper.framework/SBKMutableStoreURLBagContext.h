/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain; 
@property (retain) NSURL * syncRequestURL; 
@property (retain) NSURL * pushKeyValueRequestURL; 
@property (retain) NSURL * pullKeyValueRequestURL; 
@property (retain) NSURL * pushAllKeyValueRequestURL; 
@property (retain) NSURL * pullAllKeyValueRequestURL; 
@property (assign) BOOL domainDisabled; 
@property (assign) double pollingIntervalInSeconds; 
@end
