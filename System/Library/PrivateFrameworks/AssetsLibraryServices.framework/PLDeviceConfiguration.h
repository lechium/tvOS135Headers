/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDeviceConfiguration : NSObject {

	BOOL _isPad;
	BOOL _isTV;
	BOOL _isWatch;
	BOOL _isMac;
	BOOL _isRidingCrudSnow;
	BOOL _isRidingPowderSnow;
	BOOL _isRetina;
	double _screenScale;
	CGSize _logicalScreenSize;

}

@property (assign,nonatomic) BOOL isRetina;                                            //@synthesize isRetina=_isRetina - In the implementation block
@property (assign,nonatomic) BOOL isPad;                                               //@synthesize isPad=_isPad - In the implementation block
@property (assign,nonatomic) BOOL isTV;                                                //@synthesize isTV=_isTV - In the implementation block
@property (assign,nonatomic) BOOL isWatch;                                             //@synthesize isWatch=_isWatch - In the implementation block
@property (assign,nonatomic) BOOL isMac;                                               //@synthesize isMac=_isMac - In the implementation block
@property (nonatomic,readonly) double screenScale;                                     //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,readonly) BOOL isRidingCrudSnow;                                  //@synthesize isRidingCrudSnow=_isRidingCrudSnow - In the implementation block
@property (nonatomic,readonly) BOOL isRidingPowderSnow;                                //@synthesize isRidingPowderSnow=_isRidingPowderSnow - In the implementation block
@property (nonatomic,readonly) CGSize logicalScreenSize;                               //@synthesize logicalScreenSize=_logicalScreenSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseNanoThumbnailFormats; 
@property (nonatomic,readonly) unsigned long long logicalScreenPixelSize; 
+(id)defaultDeviceConfiguration;
-(id)description;
-(BOOL)isWatch;
-(BOOL)isMac;
-(double)screenScale;
-(id)initWithLogicalScreenSize:(CGSize)arg1 screenScale:(double)arg2 deviceClass:(void*)arg3 isRidingCrudSnow:(BOOL)arg4 isRidingPowderSnow:(BOOL)arg5 ;
-(BOOL)isRetina;
-(BOOL)shouldUseNanoThumbnailFormats;
-(unsigned long long)logicalScreenPixelSize;
-(BOOL)isPad;
-(void)setIsPad:(BOOL)arg1 ;
-(BOOL)isTV;
-(void)setIsTV:(BOOL)arg1 ;
-(void)setIsWatch:(BOOL)arg1 ;
-(void)setIsMac:(BOOL)arg1 ;
-(BOOL)isRidingCrudSnow;
-(BOOL)isRidingPowderSnow;
-(CGSize)logicalScreenSize;
-(void)setIsRetina:(BOOL)arg1 ;
@end

