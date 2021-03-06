/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo, _CLLocationGroundAltitude;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL3 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	_CLLocationGroundAltitude* fGroundAltitude;
	double fTrustedTimestamp;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 clientLocationPrivate:(SCD_Struct_CL25)arg2 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
@end

