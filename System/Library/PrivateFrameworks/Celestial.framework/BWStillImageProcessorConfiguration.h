/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue;
@class NSArray;

@interface BWStillImageProcessorConfiguration : NSObject {

	NSArray* _sensorConfigurations;
	BOOL _deferredProcessingEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,retain) NSArray * sensorConfigurations;                     //@synthesize sensorConfigurations=_sensorConfigurations - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                     //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(void)dealloc;
-(void)setSensorConfigurations:(NSArray *)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(NSArray *)sensorConfigurations;
-(BOOL)deferredProcessingEnabled;
@end

