/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolPageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domContentEventFiredWithTimestamp:(double)arg1 ;
-(void)loadEventFiredWithTimestamp:(double)arg1 ;
-(void)frameNavigatedWithFrame:(id)arg1 ;
-(void)frameDetachedWithFrameId:(id)arg1 ;
-(void)frameStartedLoadingWithFrameId:(id)arg1 ;
-(void)frameStoppedLoadingWithFrameId:(id)arg1 ;
-(void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2 ;
-(void)frameClearedScheduledNavigationWithFrameId:(id)arg1 ;
-(void)defaultAppearanceDidChangeWithAppearance:(long long)arg1 ;
@end
