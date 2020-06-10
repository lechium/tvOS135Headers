/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSDate, NSString;

@interface VUIDebugMetricsEvent : NSObject {

	NSArray* _eventData;
	NSDictionary* _rawData;
	NSArray* _sortedPageKeys;
	NSArray* _sortedPrimaryKeys;

}

@property (nonatomic,retain) NSDictionary * rawData;                   //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                      //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) NSArray * sortedPageKeys;                 //@synthesize sortedPageKeys=_sortedPageKeys - In the implementation block
@property (nonatomic,retain) NSArray * sortedPrimaryKeys;              //@synthesize sortedPrimaryKeys=_sortedPrimaryKeys - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) NSString * pageContext; 
@property (nonatomic,readonly) NSDictionary * rawEvent; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)eventType;
-(NSDate *)eventDate;
-(NSDictionary *)rawData;
-(NSString *)pageContext;
-(void)setRawData:(NSDictionary *)arg1 ;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2 ;
-(NSDictionary *)rawEvent;
-(NSArray *)sortedPageKeys;
-(NSArray *)sortedPrimaryKeys;
-(id)_sortKeys:(id)arg1 ;
-(void)setSortedPageKeys:(NSArray *)arg1 ;
-(void)setSortedPrimaryKeys:(NSArray *)arg1 ;
@end

