/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNGuidanceSignDescription;

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding> {

	MNGuidanceSignDescription* _primarySign;
	MNGuidanceSignDescription* _secondarySign;
	double _primaryDistance_SIRI_USE_ONLY;
	double _secondaryDistance_SIRI_USE_ONLY;
	double _timeUntilPrimarySign_SIRI_USE_ONLY;
	double _timeUntilSecondarySign_SIRI_USE_ONLY;

}

@property (nonatomic,readonly) MNGuidanceSignDescription * primarySign;                  //@synthesize primarySign=_primarySign - In the implementation block
@property (nonatomic,readonly) MNGuidanceSignDescription * secondarySign;                //@synthesize secondarySign=_secondarySign - In the implementation block
@property (nonatomic,readonly) double primaryDistance_SIRI_USE_ONLY;                     //@synthesize primaryDistance_SIRI_USE_ONLY=_primaryDistance_SIRI_USE_ONLY - In the implementation block
@property (nonatomic,readonly) double secondaryDistance_SIRI_USE_ONLY;                   //@synthesize secondaryDistance_SIRI_USE_ONLY=_secondaryDistance_SIRI_USE_ONLY - In the implementation block
@property (nonatomic,readonly) double timeUntilPrimarySign_SIRI_USE_ONLY;                //@synthesize timeUntilPrimarySign_SIRI_USE_ONLY=_timeUntilPrimarySign_SIRI_USE_ONLY - In the implementation block
@property (nonatomic,readonly) double timeUntilSecondarySign_SIRI_USE_ONLY;              //@synthesize timeUntilSecondarySign_SIRI_USE_ONLY=_timeUntilSecondarySign_SIRI_USE_ONLY - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MNGuidanceSignDescription *)primarySign;
-(MNGuidanceSignDescription *)secondarySign;
-(double)primaryDistance_SIRI_USE_ONLY;
-(double)secondaryDistance_SIRI_USE_ONLY;
-(double)timeUntilPrimarySign_SIRI_USE_ONLY;
-(double)timeUntilSecondarySign_SIRI_USE_ONLY;
-(id)initWithPrimarySign:(id)arg1 secondarySign:(id)arg2 primaryDistance:(double)arg3 secondaryDistance:(double)arg4 timeUntilPrimarySign:(double)arg5 timeUntilSecondarySign:(double)arg6 ;
@end

