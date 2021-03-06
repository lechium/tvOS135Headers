/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MPAVBatteryLevel : NSObject {

	NSNumber* _leftPercentage;
	NSNumber* _rightPercentage;
	NSNumber* _singlePercentage;
	NSNumber* _casePercentage;

}

@property (nonatomic,readonly) NSNumber * leftPercentage;                //@synthesize leftPercentage=_leftPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * rightPercentage;               //@synthesize rightPercentage=_rightPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * singlePercentage;              //@synthesize singlePercentage=_singlePercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * casePercentage;                //@synthesize casePercentage=_casePercentage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithOutputDevice:(void*)arg1 ;
-(id)initWithRouteDescription:(id)arg1 ;
-(NSNumber *)leftPercentage;
-(NSNumber *)rightPercentage;
-(NSNumber *)singlePercentage;
-(NSNumber *)casePercentage;
@end

