/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATVUpdatable
@optional
-(id)currentState;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3;
-(void)restoreState:(id)arg1;
-(void)reloadPage;

@required
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1;

@end

