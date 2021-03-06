/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASAuthorizationProvider;
@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding> {

	id<ASAuthorizationProvider> _provider;

}

@property (nonatomic,readonly) id<ASAuthorizationProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ASAuthorizationProvider>)provider;
-(id)initWithProvider:(id)arg1 ;
@end

