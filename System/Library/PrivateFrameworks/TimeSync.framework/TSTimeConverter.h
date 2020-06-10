/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSTimeConverter : NSObject {

	NSArray* _taiutc;

}
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)taiDateFromUTCDate:(id)arg1 ;
-(id)utcDateFromTAIDate:(id)arg1 ;
-(id)initWithTAIUTCArray:(id)arg1 ;
-(double)leapSecondForUTCDate:(id)arg1 ;
-(double)leapSecondForTAIDate:(id)arg1 ;
@end
