/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject {

	CMWorkoutMetsInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutMetsInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMWorkoutMetsInternal *)_internal;
-(void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
