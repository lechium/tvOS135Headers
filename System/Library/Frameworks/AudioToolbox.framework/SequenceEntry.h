/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SequenceEntry : NSObject {

	/*^block*/id _handler;
	BOOL _running;
	BOOL _detached;

}

@property (copy) id handler;                   //@synthesize handler=_handler - In the implementation block
@property (assign) BOOL running;               //@synthesize running=_running - In the implementation block
@property (assign) BOOL detached;              //@synthesize detached=_detached - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)detached;
-(void)setDetached:(BOOL)arg1 ;
@end
