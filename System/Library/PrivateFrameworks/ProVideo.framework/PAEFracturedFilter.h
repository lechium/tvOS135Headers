/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class NSLock;

@interface PAEFracturedFilter : PAEFilterDefaultBase {

	FracturedParams* _fxParams;
	vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> >* _fxPool;
	NSLock* _fxPoolLock;

}
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA79)arg3 withInfo:(SCD_Struct_PA78*)arg4 ;
-(BOOL)variesOverTime;
-(void)onVTBUserInteractionEventNotification:(id)arg1 ;
-(BOOL)variesByDuration;
@end

