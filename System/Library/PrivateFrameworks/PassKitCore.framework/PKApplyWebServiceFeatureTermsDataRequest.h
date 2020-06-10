/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest {

	unsigned long long _featureIdentifier;
	NSString* _termsIdentifier;
	NSString* _termsDataFormat;

}

@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                          //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsDataFormat;                          //@synthesize termsDataFormat=_termsDataFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSString *)termsDataFormat;
-(void)setTermsDataFormat:(NSString *)arg1 ;
@end

