/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSDate, NSString, NSDictionary;

@interface _CPLPruneRequestCounter : NSObject {

	NSCountedSet* _successStatsPerResourceType;
	NSCountedSet* _failedStatsPerResourceType;
	unsigned long long _successSize;
	NSDate* _lastRequestDate;
	NSString* _title;
	NSString* _statusKey;

}

@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * statusKey;                         //@synthesize statusKey=_statusKey - In the implementation block
@property (nonatomic,readonly) NSString * status; 
@property (nonatomic,readonly) NSDictionary * statusDictionary; 
-(NSString *)status;
-(NSString *)title;
-(NSDictionary *)statusDictionary;
-(void)noteRequestForResource:(id)arg1 successful:(BOOL)arg2 prunedSize:(unsigned long long)arg3 ;
-(NSString *)statusKey;
-(id)initWithTitle:(id)arg1 statusKey:(id)arg2 ;
@end

