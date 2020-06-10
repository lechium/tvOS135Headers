/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface PLMomentCluster : NSObject {

	NSArray* _moments;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,copy,readonly) NSArray * moments;               //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)moments;
-(id)initWithMoments:(id)arg1 ;
@end

