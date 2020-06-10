/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FFFeatureState : NSObject {

	NSString* _domain;
	NSString* _feature;
	long long _value;

}

@property (nonatomic,retain) NSString * domain;               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * feature;              //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) long long value;                 //@synthesize value=_value - In the implementation block
-(id)description;
-(NSString *)domain;
-(long long)value;
-(void)setDomain:(NSString *)arg1 ;
-(void)setValue:(long long)arg1 ;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 ;
@end

