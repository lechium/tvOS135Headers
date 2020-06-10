/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal {

	NSString* _reason;
	NSString* _reason2;
	unsigned _rid;
	int _source;

}

@property (nonatomic,retain) NSString * reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reason2;              //@synthesize reason2=_reason2 - In the implementation block
@property (assign,nonatomic) unsigned rid;                    //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) int source;                      //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(void)setSource:(int)arg1 ;
-(NSString *)reason;
-(int)source;
-(void)setReason:(NSString *)arg1 ;
-(void)setRid:(unsigned)arg1 ;
-(int)defaultFamiliarity;
-(unsigned)rid;
-(NSString *)reason2;
-(void)setReason2:(NSString *)arg1 ;
@end
