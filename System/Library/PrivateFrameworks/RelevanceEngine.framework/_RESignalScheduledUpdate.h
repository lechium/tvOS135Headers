/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _RESignalScheduledUpdate : NSObject {

	double _interval;
	/*^block*/id _completion;
	NSDate* _lastFireDate;

}

@property (assign,nonatomic) double interval;                    //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * lastFireDate;              //@synthesize lastFireDate=_lastFireDate - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(NSDate *)lastFireDate;
@end

