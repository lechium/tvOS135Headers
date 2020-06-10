/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {

	ICDelegateToken* _delegateToken;
	NSError* _resultError;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;              //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,copy,readonly) NSError * resultError;                        //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSString *)storefrontIdentifier;
-(id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3 ;
-(ICDelegateToken *)delegateToken;
-(NSError *)resultError;
@end

