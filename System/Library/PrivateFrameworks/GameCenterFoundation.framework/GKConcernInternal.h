/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _message;
	unsigned _concernID;

}

@property (nonatomic,retain) GKPlayerInternal * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned concernID;                     //@synthesize concernID=_concernID - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(unsigned)concernID;
-(void)setConcernID:(unsigned)arg1 ;
@end

