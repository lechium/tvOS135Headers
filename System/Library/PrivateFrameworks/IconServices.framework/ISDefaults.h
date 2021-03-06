/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSNumber;

@interface ISDefaults : NSObject {

	os_unfair_lock_s _lock;
	NSNumber* __usePerstentCache;

}

@property (retain) NSNumber * _usePerstentCache;              //@synthesize _usePerstentCache=__usePerstentCache - In the implementation block
@property (readonly) os_unfair_lock_s lock;                   //@synthesize lock=_lock - In the implementation block
@property (readonly) BOOL usePerstentCache; 
+(id)sharedInstance;
-(os_unfair_lock_s)lock;
-(BOOL)usePerstentCache;
-(NSNumber *)_usePerstentCache;
-(void)set_usePerstentCache:(NSNumber *)arg1 ;
@end

