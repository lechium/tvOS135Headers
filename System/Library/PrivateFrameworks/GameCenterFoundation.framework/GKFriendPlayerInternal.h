/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(id)lastPlayedGame;
-(int)defaultFamiliarity;
-(BOOL)isFriend;
-(void)setLastPlayedGame:(id)arg1 ;
@end

