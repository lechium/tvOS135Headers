/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBNetwork.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSSet, NSDate, TBTileMO;

@interface TBNetworkMO : NSManagedObject <TBNetwork, NSSecureCoding, NSCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@property (assign,nonatomic) long long authMask; 
@property (assign,nonatomic) BOOL captive; 
@property (nonatomic,copy) NSDate * created; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL moving; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int popularityScoreValue; 
@property (assign,nonatomic) BOOL public; 
@property (assign,nonatomic) int qualityScoreValue; 
@property (assign,nonatomic) BOOL suspicious; 
@property (assign,nonatomic) long long tileKey; 
@property (assign,nonatomic) long long timestamp; 
@property (nonatomic,retain) NSSet * accessPoints; 
@property (nonatomic,retain) TBTileMO * tile; 
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fetchRequest;
+(void)removeAllNetworksInMOC:(id)arg1 ;
+(id)generateNewNetworkObjectFromMOC:(id)arg1 ;
+(void)removeNetworksUsingPredicate:(id)arg1 moc:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isMoving;
-(NSString *)SSID;
-(NSString *)remoteIdentifier;
-(id<TBScore>)qualityScore;
-(BOOL)isCaptive;
-(BOOL)isPublic;
-(id<TBScore>)popularityScore;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;
@end
