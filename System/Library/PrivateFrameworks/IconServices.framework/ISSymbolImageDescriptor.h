/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISImageDescriptor.h>

@class NSString;

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor> {

	double _pointSize;
	double _scale;
	unsigned long long _size;
	long long _weight;

}

@property (assign,nonatomic) double pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long weight;                      //@synthesize weight=_weight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)size;
-(double)scale;
-(long long)weight;
-(void)setWeight:(long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(double)pointSize;
-(void)setPointSize:(double)arg1 ;
@end
