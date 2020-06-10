/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MTEpisode, MTPlaylist, MTPodcast;

@interface MTSyncInfo : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long syncID; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) int syncability; 
@property (assign,nonatomic) long long insertionRevision; 
@property (assign,nonatomic) long long updateRevision; 
@property (assign,nonatomic) long long artworkUpdateRevision; 
@property (assign,nonatomic,__weak) MTEpisode * episode; 
@property (assign,nonatomic,__weak) MTPlaylist * playlist; 
@property (assign,nonatomic,__weak) MTPodcast * podcast; 
+(id)predicateForHasNoInverseRelation;
+(id)predicateForIsCurrentlySyncable:(BOOL)arg1 ;
@end

