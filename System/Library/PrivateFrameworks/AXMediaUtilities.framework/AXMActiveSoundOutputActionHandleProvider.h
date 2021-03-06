/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMActiveSoundOutputActionHandleProvider <NSObject>
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@required
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1;
-(void)setRate:(float)arg1;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1;

@end

