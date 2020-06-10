/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(void)dealloc;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSURLResponse *)URLResponse;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(double)finishInterval;
-(void)setReceivedResponseTime:(double)arg1 ;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(void)setRenderFinishTime:(double)arg1 ;
@end

