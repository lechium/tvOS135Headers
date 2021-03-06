/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebCoreFrameScrollView
@required
-(void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(BOOL)arg3;
-(void)scrollingModes:(unsigned char*)arg1 vertical:(unsigned char*)arg2;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
-(CGPoint*)scrollOrigin;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;

@end

