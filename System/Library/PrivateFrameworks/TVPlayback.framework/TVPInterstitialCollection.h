/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVPInterstitialCollection : NSObject {

	NSArray* _interstitials;
	NSArray* _interstitialsWithAdjacentsMerged;
	id _backingData;

}

@property (nonatomic,retain) NSArray * interstitials;                                 //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain) NSArray * interstitialsWithAdjacentsMerged;              //@synthesize interstitialsWithAdjacentsMerged=_interstitialsWithAdjacentsMerged - In the implementation block
@property (nonatomic,retain) id backingData;                                          //@synthesize backingData=_backingData - In the implementation block
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(id)initWithInterstitials:(id)arg1 ;
-(double)timeAdjustedByRemovingInterstitials:(double)arg1 ;
-(void)setBackingData:(id)arg1 ;
-(id)backingData;
-(double)timeAdjustedByIncludingInterstitials:(double)arg1 ;
-(NSArray *)interstitialsWithAdjacentsMerged;
-(id)interstitialForTime:(double)arg1 ;
-(id)mergedInterstitialForTime:(double)arg1 ;
-(void)setInterstitialsWithAdjacentsMerged:(NSArray *)arg1 ;
@end
