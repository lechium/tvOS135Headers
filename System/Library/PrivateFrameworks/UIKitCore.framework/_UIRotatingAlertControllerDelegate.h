/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIRotatingAlertControllerDelegate <NSObject>
@optional
-(void)sheet:(id)arg1 presentingViewControllerWillChange:(id)arg2;
-(void)sheet:(id)arg1 presentingViewControllerDidChange:(id)arg2;

@required
-(CGRect*)initialPresentationRectInHostViewForSheet:(id)arg1;
-(id)hostViewForSheet:(id)arg1;
-(CGRect*)presentationRectInHostViewForSheet:(id)arg1;

@end

