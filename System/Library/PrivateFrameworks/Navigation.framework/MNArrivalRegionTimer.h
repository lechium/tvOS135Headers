/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNArrivalRegionTimerDelegate;
@class GEOArrivalRegion, NSTimer;

@interface MNArrivalRegionTimer : NSObject {

	GEOArrivalRegion* _arrivalRegion;
	NSTimer* _timer;
	id<MNArrivalRegionTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNArrivalRegionTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNArrivalRegionTimerDelegate>)delegate;
-(void)setDelegate:(id<MNArrivalRegionTimerDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithArrivalRegion:(id)arg1 ;
@end

