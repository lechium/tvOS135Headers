/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_trust.h>

@class NSString;

@interface SecConcrete_sec_trust : NSObject <OS_sec_trust> {

	SecTrustRef trust;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithTrust:(SecTrustRef)arg1 ;
@end

