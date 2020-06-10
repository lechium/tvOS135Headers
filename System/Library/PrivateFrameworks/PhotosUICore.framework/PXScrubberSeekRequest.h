/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXVideoScrubberControllerTarget;
@class NSDate;

@interface PXScrubberSeekRequest : NSObject {

	NSDate* _dateCreated;
	double _seekTime;
	id<PXVideoScrubberControllerTarget> _target;

}

@property (nonatomic,copy) NSDate * dateCreated;                                             //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) double seekTime;                                                //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoScrubberControllerTarget> target;              //@synthesize target=_target - In the implementation block
-(id)init;
-(void)setTarget:(id<PXVideoScrubberControllerTarget>)arg1 ;
-(id<PXVideoScrubberControllerTarget>)target;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(double)seekTime;
-(id)initWithTarget:(id)arg1 seekTime:(double)arg2 ;
-(void)setSeekTime:(double)arg1 ;
@end

