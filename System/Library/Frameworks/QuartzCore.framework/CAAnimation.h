/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMediaTiming.h>
#import <libobjc.A.dylib/CAAction.h>

@class CAStateControllerTransition, NSString, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (assign) long long preferredFramesPerSecond; 
@property (assign) BOOL discretizesTime; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id<CAAnimationDelegate> delegate; 
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)animation;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CAAnimationDelegate>)delegate;
-(void)setDelegate:(id<CAAnimationDelegate>)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)duration;
-(BOOL)isEnabled;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)frameInterval;
-(void)setFrameInterval:(double)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(double)repeatDuration;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)timeOffset;
-(NSString *)fillMode;
-(void)setTimeOffset:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(NSString *)beginTimeMode;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(void)setDefaultDuration:(double)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)removedOnCompletion;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(BOOL)discretizesTime;
-(void)setDiscretizesTime:(BOOL)arg1 ;
@end
