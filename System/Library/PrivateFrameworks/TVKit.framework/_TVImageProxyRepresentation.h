/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <TVKit/TVImageRepresentation.h>

@class TVImageProxy;

@interface _TVImageProxyRepresentation : TVImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(void)dealloc;
-(CGImageRef)_originalImage;
-(id)initWithImageProxy:(id)arg1 ;
-(id)_originalImageCacheKey;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

