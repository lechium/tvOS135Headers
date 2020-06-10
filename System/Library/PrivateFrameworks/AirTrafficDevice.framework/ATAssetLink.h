/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(unsigned long long)maximumBatchSize;
-(BOOL)linkIsReady;
-(BOOL)canEnqueueAsset:(id)arg1;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(void)cancelAssets:(id)arg1;
-(void)prioritizeAsset:(id)arg1;

@end

