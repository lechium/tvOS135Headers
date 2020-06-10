/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingMediaContainerParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _fragmentLength;

}

@property (nonatomic,copy,readonly) NSNumber * fragmentLength;              //@synthesize fragmentLength=_fragmentLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSNumber *)fragmentLength;
-(id)initWithFragmentLength:(id)arg1 ;
@end

