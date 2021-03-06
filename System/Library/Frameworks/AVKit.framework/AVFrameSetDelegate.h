/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVFrameSetDelegate <NSObject>
@required
-(unsigned long long)frameIndexForTime:(double)arg1;
-(void)didLoadFrameAffectingRange:(NSRange)arg1;
-(void)mediaServerResetInvalidatedFrameSet:(id)arg1;
-(double)timeForFrameIndex:(unsigned long long)arg1;

@end

