/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaHitBlobSupport
@required
-(void)beginGesture:(id)arg1;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1;
-(void)endGesture:(id)arg1;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2;
-(void)doGesture:(id)arg1;
-(void)cancelGesture:(id)arg1;

@end

