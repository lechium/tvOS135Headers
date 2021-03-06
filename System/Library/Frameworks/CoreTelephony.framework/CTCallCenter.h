/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CTCallCenter : NSObject {

	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;

}

@property (retain,readonly) NSSet * currentCalls;              //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,copy) id callEventHandler;                //@synthesize callEventHandler=_callEventHandler - In the implementation block
-(NSSet *)currentCalls;
-(id)callEventHandler;
-(void)setCallEventHandler:(id)arg1 ;
@end

