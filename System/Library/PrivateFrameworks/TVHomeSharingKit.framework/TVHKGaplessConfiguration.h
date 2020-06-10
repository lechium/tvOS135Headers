/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TVHKGaplessConfiguration : NSObject {

	NSNumber* _encodingDelay;
	NSNumber* _encodingDrain;
	NSNumber* _heuristic;
	NSNumber* _duration;
	NSNumber* _frameResynch;

}

@property (nonatomic,copy) NSNumber * encodingDelay;              //@synthesize encodingDelay=_encodingDelay - In the implementation block
@property (nonatomic,copy) NSNumber * encodingDrain;              //@synthesize encodingDrain=_encodingDrain - In the implementation block
@property (nonatomic,copy) NSNumber * heuristic;                  //@synthesize heuristic=_heuristic - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * frameResynch;               //@synthesize frameResynch=_frameResynch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 ;
-(void)setEncodingDelay:(NSNumber *)arg1 ;
-(void)setEncodingDrain:(NSNumber *)arg1 ;
-(void)setHeuristic:(NSNumber *)arg1 ;
-(void)setFrameResynch:(NSNumber *)arg1 ;
-(NSNumber *)heuristic;
-(NSNumber *)encodingDelay;
-(NSNumber *)encodingDrain;
-(NSNumber *)frameResynch;
@end

