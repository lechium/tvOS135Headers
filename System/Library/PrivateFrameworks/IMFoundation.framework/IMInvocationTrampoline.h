/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMInvocationTrampoline : NSObject {

	id _target;

}

@property (retain) id target;              //@synthesize target=_target - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)performInvocation:(id)arg1 ;
@end

