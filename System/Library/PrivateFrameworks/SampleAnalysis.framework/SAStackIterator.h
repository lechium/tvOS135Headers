/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SAFrameIterator.h>

@class NSArray, NSString;

@interface SAStackIterator : NSObject <SAFrameIterator> {

	NSArray* _stack;

}

@property (retain) NSArray * stack;                                 //@synthesize stack=_stack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)stack;
-(void)setStack:(NSArray *)arg1 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
@end
