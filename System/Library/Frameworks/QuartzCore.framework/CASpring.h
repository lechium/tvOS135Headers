/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	double _stiffness;
	double _damping;
	double _restLength;
	BOOL _enabled;
	id _delegate;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (retain) CALayer * layerA; 
@property (retain) CALayer * layerB; 
@property (assign) CGPoint attachmentPointA; 
@property (assign) CGPoint attachmentPointB; 
@property (retain) CAValueFunction * function; 
@property (assign) double restLength; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (__weak) id<CASpringDelegate> delegate; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(id)spring;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CASpringDelegate>)delegate;
-(void)setDelegate:(id<CASpringDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(CAValueFunction *)function;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)isEnabled;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(void)setFunction:(CAValueFunction *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(CALayer *)layerA;
-(void)setLayerA:(CALayer *)arg1 ;
-(CALayer *)layerB;
-(void)setLayerB:(CALayer *)arg1 ;
-(CGPoint)attachmentPointA;
-(void)setAttachmentPointA:(CGPoint)arg1 ;
-(CGPoint)attachmentPointB;
-(void)setAttachmentPointB:(CGPoint)arg1 ;
-(double)restLength;
-(void)setRestLength:(double)arg1 ;
@end

