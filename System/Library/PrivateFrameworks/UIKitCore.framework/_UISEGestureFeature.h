/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UISEGestureFeatureDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UISEGestureFeature : NSObject {

	id<_UISEGestureFeatureDelegate> _delegate;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<_UISEGestureFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
-(id<_UISEGestureFeatureDelegate>)delegate;
-(void)setDelegate:(id<_UISEGestureFeatureDelegate>)arg1 ;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(id)debugDictionary;
-(void)incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
@end

