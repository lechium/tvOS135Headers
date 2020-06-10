/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol OS_dispatch_queue, BWQRCodeSceneObserver;
@class BWInferenceResult, NSObject, BWFigVideoCaptureDevice, NSArray, NSString;

@interface BWSceneClassifierSinkNode : BWSinkNode {

	SCD_Struct_BW93 _expectedVersion;
	os_unfair_lock_s _resultLock;
	BWInferenceResult* _mostRecentSmartCameraResult;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	BWFigVideoCaptureDevice* _device;
	id<BWQRCodeSceneObserver> _qrCodeSceneObserver;
	int _maxDebugOverlaySceneCount;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver;              //@synthesize qrCodeSceneObserver=_qrCodeSceneObserver - In the implementation block
@property (readonly) NSArray * sceneConfidences; 
@property (readonly) NSString * brightStageSceneConfidence; 
@property (readonly) NSString * sunsetSunriseSceneConfidence; 
@property (readonly) NSString * petSceneConfidence; 
@property (readonly) NSString * babySceneConfidence; 
@property (readonly) NSString * qrSceneConfidence; 
@property (readonly) NSString * documentSceneConfidence; 
+(void)initialize;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 version:(SCD_Struct_BW93)arg2 sinkID:(id)arg3 ;
-(id)_stringRepresentationOfMostRecentInferenceForKey:(id)arg1 ;
-(NSArray *)sceneConfidences;
-(NSString *)brightStageSceneConfidence;
-(NSString *)sunsetSunriseSceneConfidence;
-(NSString *)petSceneConfidence;
-(NSString *)babySceneConfidence;
-(NSString *)qrSceneConfidence;
-(NSString *)documentSceneConfidence;
@end

