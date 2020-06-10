/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface WFScanMetricsManager : NSObject {

	BOOL _submited;
	NSMutableDictionary* _sectionCounts;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSMutableDictionary * sectionCounts;              //@synthesize sectionCounts=_sectionCounts - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL submited;                                    //@synthesize submited=_submited - In the implementation block
-(id)init;
-(void)reset;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setSectionCounts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionCounts;
-(void)submit;
-(void)ingestScanResults:(id)arg1 ;
-(id)sectionNameForRecord:(id)arg1 ;
-(void)setSubmited:(BOOL)arg1 ;
-(BOOL)submited;
@end

