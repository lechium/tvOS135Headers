/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SAFrameIterator.h>

@class SAFrame, SALeafFrame, SAKernelFrame, SAKernelLeafFrame, NSArray, SASharedCache, NSString;

@interface SAFrameKPerfIterator : NSObject <SAFrameIterator> {

	SAFrame* _user;
	SALeafFrame* _userLeaf;
	SAKernelFrame* _kernel;
	SAKernelLeafFrame* _kernelLeaf;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	unsigned _numUserFrames;
	unsigned _numKernelFrames;
	NSArray* _userBinaryLoadInfos;
	NSArray* _kernelBinaryLoadInfos;
	SASharedCache* _sharedCache;
	const unsigned long long* _userFrames;
	const unsigned long long* _kernelFrames;
	unsigned long long _continuation;

}

@property (retain) NSArray * userBinaryLoadInfos;                       //@synthesize userBinaryLoadInfos=_userBinaryLoadInfos - In the implementation block
@property (retain) NSArray * kernelBinaryLoadInfos;                     //@synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos - In the implementation block
@property (retain) SASharedCache * sharedCache;                         //@synthesize sharedCache=_sharedCache - In the implementation block
@property (assign) const unsigned long long* userFrames;                //@synthesize userFrames=_userFrames - In the implementation block
@property (assign) unsigned numUserFrames;                              //@synthesize numUserFrames=_numUserFrames - In the implementation block
@property (assign) const unsigned long long* kernelFrames;              //@synthesize kernelFrames=_kernelFrames - In the implementation block
@property (assign) unsigned numKernelFrames;                            //@synthesize numKernelFrames=_numKernelFrames - In the implementation block
@property (assign) unsigned long long continuation;                     //@synthesize continuation=_continuation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(SASharedCache *)sharedCache;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(BOOL)hasUserStack;
-(BOOL)hasKernelStack;
-(const unsigned long long*)userFrames;
-(unsigned)numUserFrames;
-(const unsigned long long*)kernelFrames;
-(unsigned)numKernelFrames;
-(unsigned long long)continuation;
-(id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(void)clearThreadData;
-(void)clearTaskData;
-(NSArray *)userBinaryLoadInfos;
-(void)setUserBinaryLoadInfos:(NSArray *)arg1 ;
-(NSArray *)kernelBinaryLoadInfos;
-(void)setKernelBinaryLoadInfos:(NSArray *)arg1 ;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(void)setContinuation:(unsigned long long)arg1 ;
-(void)setUserFrames:(const unsigned long long*)arg1 ;
-(void)setNumUserFrames:(unsigned)arg1 ;
-(void)setKernelFrames:(const unsigned long long*)arg1 ;
-(void)setNumKernelFrames:(unsigned)arg1 ;
@end

