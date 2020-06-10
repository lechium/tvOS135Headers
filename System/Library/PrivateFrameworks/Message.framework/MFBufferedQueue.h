/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFBufferedQueue : NSObject {

	unsigned _maximumSize;
	double _maximumLatency;
	double _timeOfLastFlush;
	NSMutableArray* _queue;
	unsigned _currentSize;

}

@property (nonatomic,readonly) unsigned size;                    //@synthesize currentSize=_currentSize - In the implementation block
@property (assign,nonatomic) unsigned maximumSize;               //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) double maximumLatency;              //@synthesize maximumLatency=_maximumLatency - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)removeAllObjects;
-(unsigned)size;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)flush;
-(BOOL)_flush;
-(unsigned)maximumSize;
-(void)setMaximumSize:(unsigned)arg1 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(BOOL)flushIfNecessary;
-(BOOL)handleItems:(id)arg1 ;
-(double)maximumLatency;
-(void)setMaximumLatency:(double)arg1 ;
@end

