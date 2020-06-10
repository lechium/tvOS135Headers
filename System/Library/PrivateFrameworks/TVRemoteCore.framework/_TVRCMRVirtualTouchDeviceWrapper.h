/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (assign,getter=isAbsolute,nonatomic) BOOL absolute; 
@property (assign,getter=isDisplayIntegrated,nonatomic) BOOL displayIntegrated; 
@property (assign,nonatomic) CGSize screenSize; 
-(id)init;
-(void)dealloc;
-(CGSize)screenSize;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAbsolute:(BOOL)arg1 ;
-(BOOL)isAbsolute;
-(void*)deviceDescriptor;
-(BOOL)isDisplayIntegrated;
-(void)setDisplayIntegrated:(BOOL)arg1 ;
@end
