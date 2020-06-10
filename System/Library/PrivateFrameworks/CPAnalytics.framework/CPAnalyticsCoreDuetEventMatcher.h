/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class NSString, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {

	BOOL _matchNextEvent;
	NSString* _datasetName;
	NSString* _identifierPropertyName;
	NSString* _subsetPropertyName;
	NSObject* _subsetPropertyValue;

}

@property (nonatomic,readonly) NSString * datasetName;                         //@synthesize datasetName=_datasetName - In the implementation block
@property (nonatomic,readonly) NSString * identifierPropertyName;              //@synthesize identifierPropertyName=_identifierPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * subsetPropertyName;                  //@synthesize subsetPropertyName=_subsetPropertyName - In the implementation block
@property (nonatomic,readonly) NSObject * subsetPropertyValue;                 //@synthesize subsetPropertyValue=_subsetPropertyValue - In the implementation block
@property (nonatomic,readonly) BOOL matchNextEvent;                            //@synthesize matchNextEvent=_matchNextEvent - In the implementation block
-(id)initWithConfig:(id)arg1 ;
-(NSString *)datasetName;
-(NSString *)identifierPropertyName;
-(NSString *)subsetPropertyName;
-(NSObject *)subsetPropertyValue;
-(BOOL)matchNextEvent;
@end

