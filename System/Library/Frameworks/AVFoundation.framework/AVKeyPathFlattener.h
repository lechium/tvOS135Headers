/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {

	AVKeyPathDependencyManager* _dependencyManager;
	AVTwoPartKeyPath* _dependencyKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) id dependentProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2 ;
-(id)observedObject;
-(id)topLevelDependencyProperty;
-(id)dependentProperty;
@end

