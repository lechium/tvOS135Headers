/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(id)initWithReason:(long long)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
@end

