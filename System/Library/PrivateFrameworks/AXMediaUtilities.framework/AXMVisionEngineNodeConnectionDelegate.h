/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
@required
-(void)triggerWithSource:(id)arg1 context:(id)arg2;
-(BOOL)engineWillAcceptTiggerWithSource:(id)arg1;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
-(void)captureSessionNodeWillProcessFrame:(id)arg1;
-(void)captureSessionNodeDidDropFrame:(id)arg1;

@end

