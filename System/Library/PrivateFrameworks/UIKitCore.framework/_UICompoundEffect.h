/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {

	NSArray* _effects;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(long long)_expectedUsage;
-(id)initWithEffects:(id)arg1 ;
-(id)_allEffects;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
@end

