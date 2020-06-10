/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INImage.h>

@class NSData, NSURL;

@interface _INURLImage : INImage {

	NSData* _sandboxExtensionData;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setSandboxExtensionData:,nonatomic,copy) NSData * _sandboxExtensionData;              //@synthesize sandboxExtensionData=_sandboxExtensionData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_dictionaryRepresentation;
-(id)_uri;
-(BOOL)_requiresRetrieval;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_setUri:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(NSData *)_sandboxExtensionData;
-(id)initWithImageURL:(id)arg1 ;
-(void)_setSandboxExtensionData:(id)arg1 ;
-(NSURL *)imageURL;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

