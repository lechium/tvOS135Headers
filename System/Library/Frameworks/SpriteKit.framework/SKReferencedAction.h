/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKReferencedAction : SKAction {

	SKCReferencedAction* _mycaction;
	SKAction* _referencedAction;
	NSString* _referencedActionName;

}
+(BOOL)supportsSecureCoding;
+(id)referenceActionWithName:(id)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(/*^block*/id)arg1 ;
-(id)reversedAction;
-(void)setTimingMode:(long long)arg1 ;
-(id)subactions;
-(void)_ensureReferencedAction;
@end

