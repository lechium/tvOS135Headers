/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantRequestInternal, NSArray;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding> {

	GKTournamentParticipantRequestInternal* _internal;

}

@property (retain) GKTournamentParticipantRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) NSArray * participantStates; 
@property (assign,nonatomic) BOOL friendsOnly; 
@property (assign,nonatomic) NSRange range; 
+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(GKTournamentParticipantRequestInternal *)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setInternal:(GKTournamentParticipantRequestInternal *)arg1 ;
@end

