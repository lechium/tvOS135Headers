/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMenuLeafAlternate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding> {

	NSString* _title;
	SEL _action;
	long long _modifierFlags;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)alternateWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(long long)modifierFlags;
-(SEL)action;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)_performWithTarget:(id)arg1 ;
-(long long)_leafKeyModifierFlags;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3 ;
-(id)initWithModifierFlags:(long long)arg1 ;
@end

