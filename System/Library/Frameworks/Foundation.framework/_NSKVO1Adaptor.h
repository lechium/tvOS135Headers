/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSConcreteObservation.h>

@class NSObservableKeyPath;

@interface _NSKVO1Adaptor : _NSConcreteObservation {

	NSObservableKeyPath* kp;
	BOOL emitsChanges;

}
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(void)finishObserving;
-(void)remove;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 ;
-(void)_setEmitsChanges:(BOOL)arg1 ;
@end

