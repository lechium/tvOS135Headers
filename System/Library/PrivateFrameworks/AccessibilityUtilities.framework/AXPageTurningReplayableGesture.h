/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture {

	BOOL _isLeftToRightSwipe;
	BOOL _isLandscape;

}

@property (assign,nonatomic) BOOL isLeftToRightSwipe;              //@synthesize isLeftToRightSwipe=_isLeftToRightSwipe - In the implementation block
@property (assign,nonatomic) BOOL isLandscape;                     //@synthesize isLandscape=_isLandscape - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
-(BOOL)isLeftToRightSwipe;
-(id)initForLeftToRightSwipe:(BOOL)arg1 ;
-(void)setIsLeftToRightSwipe:(BOOL)arg1 ;
-(BOOL)isLandscape;
-(void)setIsLandscape:(BOOL)arg1 ;
@end

