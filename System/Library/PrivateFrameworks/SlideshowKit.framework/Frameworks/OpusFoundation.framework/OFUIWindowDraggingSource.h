/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIWindowDraggingSource <NSObject>
@optional
-(CGPoint*)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
-(CGRect*)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
-(unsigned long long)draggingSourceWillBegin:(id)arg1;
-(void)draggingSourceDidBegin:(id)arg1;
-(BOOL)draggingSource:(id)arg1 willAddItem:(id)arg2;
-(void)draggingSource:(id)arg1 didAddItem:(id)arg2;
-(void)draggingSourceDidMove:(id)arg1;
-(void)draggingSource:(id)arg1 updateItem:(id)arg2;
-(void)draggingSourceDidEnd:(id)arg1 cancelled:(BOOL)arg2;

@end

