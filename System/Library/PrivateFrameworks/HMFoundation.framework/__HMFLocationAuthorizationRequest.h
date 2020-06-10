/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/__HMFLocationManagerOperation.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {

	BOOL _requested;
	long long _type;

}

@property (readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithType:(long long)arg1 authorization:(id)arg2 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

