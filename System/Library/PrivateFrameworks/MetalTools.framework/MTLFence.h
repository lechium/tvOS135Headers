/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLFence <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id<MTLDevice>)device;

@end

