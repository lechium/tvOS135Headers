/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation {

	long long _entityType;
	MPMediaQuery* _query;
	MPUSearchDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,__weak,readonly) MPUSearchDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
-(id)description;
-(void)main;
-(MPUSearchDataSource *)dataSource;
-(NSString *)searchString;
-(id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 ;
-(void)executeSearch;
@end

