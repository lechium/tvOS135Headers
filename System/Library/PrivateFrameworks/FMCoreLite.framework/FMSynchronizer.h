/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSString, NSObject;

@interface FMSynchronizer : NSObject {

	BOOL _timeoutOccurred;
	double _timeout;
	NSString* _info;
	NSObject*<OS_dispatch_semaphore> _sem;

}

@property (assign,nonatomic) BOOL timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(void)wait;
-(double)timeout;
-(void)signal;
-(NSString *)info;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)setTimeoutOccurred:(BOOL)arg1 ;
-(BOOL)timeoutOccurred;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
@end

