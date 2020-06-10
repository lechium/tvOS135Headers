/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSArray, NSNumber;

@interface SAHAEntity : SADomainObject

@property (nonatomic,copy) NSString * accessory; 
@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSString * accessoryType; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSNumber * currentDevice; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (nonatomic,copy) NSString * home; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSURL * primaryServiceIdentifier; 
@property (nonatomic,copy) NSArray * relatedEntityIdentifiers; 
@property (nonatomic,copy) NSString * room; 
@property (nonatomic,copy) NSURL * roomIdentifier; 
@property (nonatomic,copy) NSArray * sceneActions; 
@property (nonatomic,copy) NSString * sceneType; 
@property (nonatomic,copy) NSString * serviceGroup; 
@property (nonatomic,copy) NSArray * serviceGroupIdentifiers; 
@property (nonatomic,copy) NSString * serviceSubType; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSArray * status; 
@property (nonatomic,copy) NSArray * targetAttributes; 
@property (nonatomic,copy) NSString * zone; 
@property (nonatomic,copy) NSArray * zoneIdentifiers; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(NSString *)zone;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)status;
-(id)groupIdentifier;
-(void)setStatus:(NSArray *)arg1 ;
-(NSNumber *)currentDevice;
-(void)setAccessoryType:(NSString *)arg1 ;
-(NSString *)accessoryType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setCurrentDevice:(NSNumber *)arg1 ;
-(NSString *)home;
-(void)setHome:(NSString *)arg1 ;
-(NSString *)accessory;
-(void)setAccessory:(NSString *)arg1 ;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(NSString *)room;
-(void)setRoom:(NSString *)arg1 ;
-(void)setZone:(NSString *)arg1 ;
-(NSString *)sceneType;
-(void)setSceneType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(NSURL *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(NSURL *)roomIdentifier;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceSubType;
-(void)setServiceSubType:(NSString *)arg1 ;
-(NSString *)hashedRouteUID;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(NSURL *)primaryServiceIdentifier;
-(void)setPrimaryServiceIdentifier:(NSURL *)arg1 ;
-(NSArray *)relatedEntityIdentifiers;
-(void)setRelatedEntityIdentifiers:(NSArray *)arg1 ;
-(NSArray *)sceneActions;
-(void)setSceneActions:(NSArray *)arg1 ;
-(NSString *)serviceGroup;
-(void)setServiceGroup:(NSString *)arg1 ;
-(NSArray *)serviceGroupIdentifiers;
-(void)setServiceGroupIdentifiers:(NSArray *)arg1 ;
-(NSArray *)targetAttributes;
-(void)setTargetAttributes:(NSArray *)arg1 ;
-(NSArray *)zoneIdentifiers;
-(void)setZoneIdentifiers:(NSArray *)arg1 ;
@end

