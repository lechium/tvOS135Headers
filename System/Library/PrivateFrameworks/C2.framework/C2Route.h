/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface C2Route : NSObject {

	NSString* _destination;
	double _lastUpdated;

}

@property (nonatomic,retain) NSString * destination;              //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) double lastUpdated;                  //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(double)lastUpdated;
-(void)setLastUpdated:(double)arg1 ;
@end

