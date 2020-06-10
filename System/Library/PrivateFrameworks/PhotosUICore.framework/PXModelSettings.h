/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings {

	double _photoAnalysisGraphInitialGraceDelay;
	double _photoAnalysisGraphProgressUpdateInterval;

}

@property (assign,nonatomic) double photoAnalysisGraphInitialGraceDelay;                   //@synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay - In the implementation block
@property (assign,nonatomic) double photoAnalysisGraphProgressUpdateInterval;              //@synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)photoAnalysisGraphInitialGraceDelay;
-(void)setPhotoAnalysisGraphInitialGraceDelay:(double)arg1 ;
-(double)photoAnalysisGraphProgressUpdateInterval;
-(void)setPhotoAnalysisGraphProgressUpdateInterval:(double)arg1 ;
@end
