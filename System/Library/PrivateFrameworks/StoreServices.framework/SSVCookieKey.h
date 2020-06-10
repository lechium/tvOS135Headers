/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface SSVCookieKey : NSObject <NSCopying> {

	NSNumber* _identifier;
	long long _scope;

}

@property (nonatomic,copy) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long scope;                  //@synthesize scope=_scope - In the implementation block
+(id)keyWithIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
@end

