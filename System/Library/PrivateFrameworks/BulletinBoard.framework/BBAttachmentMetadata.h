/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL;

@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _type;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSUUID *)UUID;
-(BOOL)hasContentModificationsRelativeTo:(id)arg1 ;
-(id)_initWithUUID:(id)arg1 type:(long long)arg2 URL:(id)arg3 ;
@end
