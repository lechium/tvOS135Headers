/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _version;
	NSDate* _lastModificationDate;

}

@property (nonatomic,readonly) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2 ;
-(NSDate *)lastModificationDate;
@end

