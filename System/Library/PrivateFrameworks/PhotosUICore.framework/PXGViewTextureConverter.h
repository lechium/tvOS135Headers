/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureConverter.h>

@protocol OS_dispatch_queue;
@class PXGImageTexture, NSObject, NSString;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter> {

	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) PXGImageTexture * transparentTexture; 
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)presentationType;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2 ;
-(id)createPayloadTextureFromPayload:(id)arg1 ;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX24)arg1 ;
-(PXGImageTexture *)transparentTexture;
-(BOOL)supportsTextureAtlas;
@end

