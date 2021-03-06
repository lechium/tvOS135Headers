/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLCaptureScope.h>
@class NSString;


@protocol MTLCaptureScope <NSObject>
@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@required
-(NSString *)label;
-(void)beginScope;
-(void)endScope;
-(void)setLabel:(id)arg1;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;

@end


@protocol MTLDevice, MTLCommandQueue;
@class NSString;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(void)dealloc;
-(void)beginScope;
-(void)endScope;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 ;
@end

