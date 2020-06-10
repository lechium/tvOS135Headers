/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXMutableReplayableGesture : AXReplayableGesture
-(void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3 ;
-(void)addPointsFromReplayableGesture:(id)arg1 ;
-(void)_addPoint:(CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4 ;
-(void)_addPoint:(CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4 ;
-(void)_removeFingersAtEventIndex:(unsigned long long)arg1 ;
-(id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1 ;
-(id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1 ;
@end

