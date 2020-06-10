/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation {

	SCD_Struct_IP1 _frameTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(id)debugDescription;
-(id)identifier;
-(id)initWithOperation:(id)arg1 ;
-(id)settingsDictionary;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithFrameTime:(SCD_Struct_IP1)arg1 ;
-(SCD_Struct_IP1)frameTime;
@end

