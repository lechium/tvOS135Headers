/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKMove : SKAction {

	SKCMove* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)moveBy:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveTo:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveToX:(double)arg1 duration:(double)arg2 ;
+(id)moveToY:(double)arg1 duration:(double)arg2 ;
+(id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveByX:(double)arg1 duration:(double)arg2 ;
+(id)moveByY:(double)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

