/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@interface IMSingletonProxy : NSProxy {

	id _singleton;
	id _singletonOverride;
	Class _overrideClass;

}
+(void)load;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)__isSingletonProxy__im;
-(id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2 ;
-(id)singletonOverrideRef;
-(void)setSingletonOverride:(id)arg1 ;
-(id)singletonRef;
@end

