/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSArray;

@interface ASDUpdatePollMetrics : NSObject {

	NSDate* _pollTime;
	NSString* _reason;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSDate * pollTime;                //@synthesize pollTime=_pollTime - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(id)description;
-(NSString *)reason;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSDate *)pollTime;
-(void)setPollTime:(NSDate *)arg1 ;
@end

