/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSMessagePort.h>

@protocol VSJSMessagePort <JSExport>
@required
-(void)postMessage:(id)arg1;

@end


@protocol VSJSMessagePortDelegate;
@interface VSJSMessagePort : IKJSObject <VSJSMessagePort> {

	id<VSJSMessagePortDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSJSMessagePortDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSJSMessagePortDelegate>)delegate;
-(void)setDelegate:(id<VSJSMessagePortDelegate>)arg1 ;
-(void)postMessage:(id)arg1 ;
@end

