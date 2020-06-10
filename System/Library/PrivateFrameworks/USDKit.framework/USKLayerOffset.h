/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKLayerOffset : NSObject {

	SdfLayerOffset _layerOffset;
	double _offset;
	double _scale;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(double)scale;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(SdfLayerOffset)sdfLayerOffset;
-(id)initWithSdfLayerOffset:(SdfLayerOffset)arg1 ;
-(id)initWithOffset:(double)arg1 scale:(double)arg2 ;
@end
