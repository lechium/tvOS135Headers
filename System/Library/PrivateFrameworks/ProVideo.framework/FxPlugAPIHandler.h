/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxHostResourcesAPI.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@protocol FxPlugAPIDelegate;
@class NSObject, NSString;

@interface FxPlugAPIHandler : NSObject <FxHostResourcesAPI, PROAPIObject> {

	NSObject*<FxPlugAPIDelegate> _delegate;

}

@property (assign,nonatomic) NSObject*<FxPlugAPIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<FxPlugAPIDelegate>)delegate;
-(void)setDelegate:(NSObject*<FxPlugAPIDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(void*)allocateMemory:(unsigned long long)arg1 clear:(BOOL)arg2 clearWith:(unsigned char)arg3 error:(id*)arg4 ;
-(void)freeMemory:(void*)arg1 error:(id*)arg2 ;
-(void)trackExternalAllocation:(unsigned long long)arg1 ;
-(void)createTexture:(id*)arg1 withDOD:(FxRect)arg2 GLTarget:(unsigned)arg3 level:(int)arg4 internalFormat:(unsigned)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned)arg9 type:(unsigned)arg10 pixels:(const void*)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id*)arg14 ;
-(void)deleteTexture:(id)arg1 error:(id*)arg2 ;
-(void)createPBuffer:(unsigned*)arg1 withTarget:(unsigned)arg2 error:(id*)arg3 ;
-(void)deletePBuffer:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfCores;
-(void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(BOOL)arg5 error:(id*)arg6 ;
-(id)errorWithString:(id)arg1 andCode:(long long)arg2 ;
-(void)runFxPlugThread:(id)arg1 ;
@end

