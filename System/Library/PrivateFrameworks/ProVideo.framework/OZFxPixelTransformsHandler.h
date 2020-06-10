/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxPixelTransformsAPI.h>

@class NSString;

@interface OZFxPixelTransformsHandler : NSObject <PROAPIObject, FxPixelTransformsAPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAgent:(const LiAgent*)arg1 ;
-(PCMatrix44Tmpl<double>)pixelTransform;
-(PCMatrix44Tmpl<double>)inversePixelTransform;
-(PCMatrix44Tmpl<double>)destinationPixelTransform;
-(PCMatrix44Tmpl<double>)destinationInversePixelTransform;
-(void)setPreTransform:(const PCMatrix44Tmpl<double>*)arg1 ;
-(void)setPostTransform:(const PCMatrix44Tmpl<double>*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

