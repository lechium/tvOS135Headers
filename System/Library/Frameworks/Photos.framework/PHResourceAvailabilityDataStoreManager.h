/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLResourceDataStore;
#import <Photos/Photos-Structs.h>
@interface PHResourceAvailabilityDataStoreManager : NSObject {

	AB _isCancelled;
	os_unfair_lock_s _lock;
	id<PLResourceDataStore> _dataStore;
	unsigned long long _requestID;

}
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(void)makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 options:(id)arg3 managedObjectContext:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end
