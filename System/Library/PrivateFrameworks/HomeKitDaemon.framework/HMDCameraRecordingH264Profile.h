/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCameraRecordingH264Profile : HMDNumberParser <NSSecureCoding> {

	long long _h264Profile;

}

@property (nonatomic,readonly) long long h264Profile;              //@synthesize h264Profile=_h264Profile - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithProfiles:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(long long)h264Profile;
-(id)initWithH264Profile:(long long)arg1 ;
@end

