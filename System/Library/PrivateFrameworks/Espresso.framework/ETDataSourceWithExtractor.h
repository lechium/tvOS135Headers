/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@class ETImageDescriptorExtractor;

@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	ETImageDescriptorExtractor* _extractor;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 extractor:(id)arg2 ;
@end

