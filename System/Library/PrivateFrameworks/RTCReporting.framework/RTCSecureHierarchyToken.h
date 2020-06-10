/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTCReporting/RTCReporting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding> {

	NSString* _token;
	int _level;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int level;                   //@synthesize level=_level - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)level;
-(void)setLevel:(int)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 level:(int)arg2 ;
@end

