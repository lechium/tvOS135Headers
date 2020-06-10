/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PBSOSUpdateScanOptions : NSObject <NSSecureCoding> {

	BOOL _MDMUseDelayPeriod;
	NSString* _identifier;
	NSString* _requestedPMV;
	NSNumber* _delayPeriod;

}

@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;              //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;               //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (nonatomic,retain) NSNumber * delayPeriod;               //@synthesize delayPeriod=_delayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)delayPeriod;
-(void)setDelayPeriod:(NSNumber *)arg1 ;
-(void)_setDefaultOptions;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(NSString *)requestedPMV;
-(BOOL)MDMUseDelayPeriod;
@end

