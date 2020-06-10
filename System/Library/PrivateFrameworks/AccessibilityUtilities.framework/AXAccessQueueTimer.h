/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(void)cancel;
-(BOOL)isActive;
-(BOOL)isPending;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;

@end
