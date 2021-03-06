/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFLocking;
@class CLLocationManager, HMFLocationAuthorization, NSString;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _ready;
	CLLocationManager* _manager;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (readonly) CLLocationManager * manager;                           //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(BOOL)isReady;
-(CLLocationManager *)manager;
-(HMFLocationAuthorization *)authorization;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

