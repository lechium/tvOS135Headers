/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface CLSBusinessCacheEntry : NSManagedObject

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double updateTimestamp; 
@property (nonatomic,retain) NSSet * businessItems; 
+(id)entityName;
@end

