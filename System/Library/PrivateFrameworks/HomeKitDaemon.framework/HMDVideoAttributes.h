/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, HMDVideoResolution;

@interface HMDVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	HMDVideoResolution* _videoResolution;
	NSNumber* _framerate;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                             //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                            //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoResolution * videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * framerate;                              //@synthesize framerate=_framerate - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)translateImageResolution:(id)arg1 imageWidth:(id*)arg2 imageHeight:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoResolution *)videoResolution;
-(NSNumber *)framerate;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)translateImageWidth:(id)arg1 imageHeight:(id)arg2 ;
-(id)initWithResolution:(id)arg1 framerate:(id)arg2 ;
@end

