/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface geo_isolater : NSObject {

	char* _name;
	os_unfair_lock_s _lock;

}
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(id)initWithName:(const char*)arg1 ;
@end

