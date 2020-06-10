/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_AV7 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(CGSize)renderSize;
-(void)_willDeallocOrFinalize;
-(SCD_Struct_AV7)compositionTime;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 cancellationTest:(/*^block*/id)arg3 defaultCIContextProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(CIImage *)sourceImage;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
@end

