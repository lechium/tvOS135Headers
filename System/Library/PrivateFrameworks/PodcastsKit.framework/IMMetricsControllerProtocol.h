/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMMetricsControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * topic; 
@required
-(NSString *)topic;
-(BOOL)shouldSuppressUserInfo;
-(void)recordEvent:(id)arg1;
-(void)flushImmediately;
-(BOOL)shouldIgnoreDNU;

@end

