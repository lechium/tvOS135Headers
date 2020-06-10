/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject {

	id memoryWarningObserver;
	NSMutableArray* framebufferArrayLarge;
	NSMutableArray* framebufferArraySmall;
	NSString* actualLookUp;
	NSString* actualPalette;
	CGSize smallUseSize;
	CGSize largeUseSize;
	TDreamFramebuffer* _outputBufferAndTexture;
	TDreamFramebuffer* _lookUpBuffer;

}

@property (nonatomic,retain) TDreamFramebuffer * outputBufferAndTexture;              //@synthesize outputBufferAndTexture=_outputBufferAndTexture - In the implementation block
@property (nonatomic,retain) TDreamFramebuffer * lookUpBuffer;                        //@synthesize lookUpBuffer=_lookUpBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)lookupFailedToLoad;
-(void)deleteLargeFramebuffers;
-(void)deleteSmallFramebuffers;
-(void)deleteAllFramebuffers;
-(void)newLookUp:(id)arg1 ;
-(unsigned)getOutputBufferNameWithIPImage:(IPImage)arg1 ;
-(void)addImageBufferToArray:(int)arg1 ipImage:(IPImage)arg2 ;
-(unsigned)getTextureNameFromArray:(int)arg1 ;
-(unsigned)getBufferFromArray:(int)arg1 withSize:(CGSize)arg2 ;
-(void)clearFrameBuffers;
-(unsigned)getOutputBufferNamer;
-(TDreamFramebuffer *)outputBufferAndTexture;
-(void)setOutputBufferAndTexture:(TDreamFramebuffer *)arg1 ;
-(TDreamFramebuffer *)lookUpBuffer;
-(void)setLookUpBuffer:(TDreamFramebuffer *)arg1 ;
@end

