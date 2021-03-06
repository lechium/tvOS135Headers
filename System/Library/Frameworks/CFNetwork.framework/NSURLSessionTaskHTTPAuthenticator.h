/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying> {

	NSSet* _statusCodes;

}

@property (copy) NSSet * statusCodes;              //@synthesize statusCodes=_statusCodes - In the implementation block
+(id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)statusCodes;
-(id)initWithStatusCodes:(id)arg1 ;
-(void)setStatusCodes:(NSSet *)arg1 ;
@end

