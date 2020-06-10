/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CPLRecordChange, CPLRecordStatus;

@interface _CPLTransientStatus : NSObject {

	NSDate* _date;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) CPLRecordStatus * status; 
-(NSDate *)date;
-(CPLRecordStatus *)status;
-(unsigned long long)generation;
-(CPLRecordChange *)record;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3 ;
@end

