/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {

	BSDispatchSource* _source;
	/*^block*/id _deathHandler;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
@end
