/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;

}
-(void)dealloc;
-(BOOL)invoke;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)invokeWithSignal:(long long)arg1 ;
@end

