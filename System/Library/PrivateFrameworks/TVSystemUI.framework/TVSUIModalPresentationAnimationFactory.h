/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSString;

@interface TVSUIModalPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	unsigned long long _curve;

}

@property (nonatomic,readonly) unsigned long long curve;              //@synthesize curve=_curve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(unsigned long long)curve;
-(id)initWithCurve:(unsigned long long)arg1 ;
@end

