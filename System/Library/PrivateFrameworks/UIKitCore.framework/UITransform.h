/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UITransform : NSObject <BSDescriptionProviding, NSCopying> {

	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identity;
+(id)scale:(double)arg1 ;
+(id)scaleX:(double)arg1 scaleY:(double)arg2 ;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)rotationWithRadians:(double)arg1 ;
+(id)rotationWithDegrees:(long long)arg1 ;
+(id)translation:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(CGAffineTransform)transform;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
@end

