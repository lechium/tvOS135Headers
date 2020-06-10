/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(void)dealloc;
-(void)reset;
-(unsigned long long)window;
-(double)average;
-(void)update:(double)arg1 ;
-(id)initWithWindow:(unsigned long long)arg1 ;
@end
