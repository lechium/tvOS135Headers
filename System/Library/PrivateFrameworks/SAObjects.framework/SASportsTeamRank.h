/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * position; 
@property (nonatomic,copy) NSNumber * primary; 
@property (nonatomic,copy) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)teamRank;
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(NSNumber *)position;
-(void)setPosition:(NSNumber *)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)primary;
@end

