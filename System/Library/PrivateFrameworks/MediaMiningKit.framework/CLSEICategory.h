/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSEICategory : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSSet * subCategories; 
@property (nonatomic,retain) CLSEICategory * parentCategory; 
@property (nonatomic,retain) NSSet * events; 
@end
