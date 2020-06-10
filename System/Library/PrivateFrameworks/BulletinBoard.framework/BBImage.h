/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	NSString* _path;
	NSString* _name;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithName:(id)arg1 inBundlePath:(id)arg2 ;
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithName:(id)arg1 inBundle:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4 ;
@end

