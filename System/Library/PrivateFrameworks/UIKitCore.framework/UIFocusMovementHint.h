/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIFocusMovementHint : NSObject <NSCopying> {

	double _translationAmount;
	double _rotationAmount;
	CGVector _movementDirection;

}

@property (assign,nonatomic) double translationAmount;                          //@synthesize translationAmount=_translationAmount - In the implementation block
@property (assign,nonatomic) double rotationAmount;                             //@synthesize rotationAmount=_rotationAmount - In the implementation block
@property (nonatomic,readonly) CGVector movementDirection;                      //@synthesize movementDirection=_movementDirection - In the implementation block
@property (nonatomic,readonly) CATransform3D perspectiveTransform; 
@property (nonatomic,readonly) CGVector rotation; 
@property (nonatomic,readonly) CGVector translation; 
@property (nonatomic,readonly) CATransform3D interactionTransform; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)rotation;
-(CGVector)translation;
-(void)setRotationAmount:(double)arg1 ;
-(CATransform3D)perspectiveTransform;
-(double)rotationAmount;
-(id)initWithMovementDirection:(CGVector)arg1 itemSize:(CGSize)arg2 ;
-(CATransform3D)interactionTransform;
-(CGVector)movementDirection;
-(double)translationAmount;
-(void)setTranslationAmount:(double)arg1 ;
@end

