/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVRunLoopConditionRunLoopState : NSObject {

	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _signalSource;
	BOOL _signaled;

}

@property (nonatomic,readonly) CFRunLoopRef runLoop;                       //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef signalSource;              //@synthesize signalSource=_signalSource - In the implementation block
@property (assign,nonatomic) BOOL signaled;                                //@synthesize signaled=_signaled - In the implementation block
+(id)runLoopStateWithRunLoop:(CFRunLoopRef)arg1 ;
-(void)dealloc;
-(CFRunLoopRef)runLoop;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopSourceRef)signalSource;
-(void)setSignalSource:(CFRunLoopSourceRef)arg1 ;
-(BOOL)signaled;
-(void)setSignaled:(BOOL)arg1 ;
@end
