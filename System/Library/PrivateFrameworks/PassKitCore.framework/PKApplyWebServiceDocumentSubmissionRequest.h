/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL, NSData, NSArray;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	unsigned long long _featureIdentifier;
	NSURL* _baseURL;
	NSData* _frontImageData;
	NSData* _backImageData;
	NSString* _documentCountryCode;
	unsigned long long _documentType;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSData * frontImageData;                             //@synthesize frontImageData=_frontImageData - In the implementation block
@property (nonatomic,copy) NSData * backImageData;                              //@synthesize backImageData=_backImageData - In the implementation block
@property (nonatomic,copy) NSString * documentCountryCode;                      //@synthesize documentCountryCode=_documentCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long documentType;                   //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                              //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(NSArray *)certificates;
-(NSString *)applicationIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)setCertificates:(NSArray *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(NSData *)frontImageData;
-(void)setFrontImageData:(NSData *)arg1 ;
-(NSData *)backImageData;
-(void)setBackImageData:(NSData *)arg1 ;
-(NSString *)documentCountryCode;
-(void)setDocumentCountryCode:(NSString *)arg1 ;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
@end

