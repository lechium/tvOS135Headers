/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSError* _error;

}

@property (assign) BOOL success;               //@synthesize success=_success - In the implementation block
@property (copy) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
@end

