/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFollowPath : SKAction {

	SKCFollowPath* _mycaction;
	CGPathRef _cgPath;

}
+(BOOL)supportsSecureCoding;
+(id)followPath:(CGPathRef)arg1 duration:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4 ;
+(id)followPath:(CGPathRef)arg1 speed:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

