/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject;

@interface RPHIDSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(id)init;
-(void)invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id<RPMessageable>)messenger;
-(void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
@end

