/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKInactiveTransitLine.h>

@protocol GEOTransitLine;
@class NSString, NSDate, NSTimeZone;

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {

	id<GEOTransitLine> _line;
	BOOL _blocked;
	NSDate* _serviceResumesDate;
	NSTimeZone* _timeZone;
	NSDate* _referenceDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) NSString * serviceResumesDescription; 
-(id<GEOTransitLine>)line;
-(NSString *)serviceResumesDescription;
-(id)initWithTransitLine:(id)arg1 blocked:(BOOL)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5 ;
@end

