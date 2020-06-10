/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface PLDuetActivitySchedulerUsageSnapshot : NSObject {

	NSDate* _startDate;
	NSDate* _stopDate;
	double _numberOfBytesUploadedWiFi;
	double _numberOfBytesDownloadedWiFi;
	double _numberOfBytesUploadedCell;
	double _numberOfBytesDownloadedCell;
	NSString* _bundleID;

}

@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * stopDate;                               //@synthesize stopDate=_stopDate - In the implementation block
@property (assign) double numberOfBytesUploadedWiFi;                //@synthesize numberOfBytesUploadedWiFi=_numberOfBytesUploadedWiFi - In the implementation block
@property (assign) double numberOfBytesDownloadedWiFi;              //@synthesize numberOfBytesDownloadedWiFi=_numberOfBytesDownloadedWiFi - In the implementation block
@property (assign) double numberOfBytesUploadedCell;                //@synthesize numberOfBytesUploadedCell=_numberOfBytesUploadedCell - In the implementation block
@property (assign) double numberOfBytesDownloadedCell;              //@synthesize numberOfBytesDownloadedCell=_numberOfBytesDownloadedCell - In the implementation block
@property (retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
-(id)description;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)stopDate;
-(double)numberOfBytesUploadedCell;
-(double)numberOfBytesDownloadedCell;
-(double)numberOfBytesUploadedWiFi;
-(double)numberOfBytesDownloadedWiFi;
-(void)setStopDate:(NSDate *)arg1 ;
-(void)setNumberOfBytesUploadedWiFi:(double)arg1 ;
-(void)setNumberOfBytesDownloadedWiFi:(double)arg1 ;
-(void)setNumberOfBytesUploadedCell:(double)arg1 ;
-(void)setNumberOfBytesDownloadedCell:(double)arg1 ;
@end

