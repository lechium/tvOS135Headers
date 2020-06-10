/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {

	BOOL _isFile;
	NSString* _type;
	NSString* _subtype;
	long long _count;

}

@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtype;              //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL isFile;                          //@synthesize isFile=_isFile - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(long long)count;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subtype;
-(void)incrementCount;
-(BOOL)isFile;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(BOOL)arg3 ;
@end
