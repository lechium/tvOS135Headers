/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (nonatomic,copy) NSDate * eventStartTime; 
@property (assign,nonatomic) BOOL watchingLive; 
+(id)liveStreamingViewingContext;
+(id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)eventStartTime;
-(void)setEventStartTime:(NSDate *)arg1 ;
-(BOOL)watchingLive;
-(void)setWatchingLive:(BOOL)arg1 ;
@end

