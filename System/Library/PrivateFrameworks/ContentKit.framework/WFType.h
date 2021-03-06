/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,copy,readonly) NSString * string; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)typeDescription;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)conformsToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToClass:(Class)arg1 ;
-(BOOL)isEqualToClass:(Class)arg1 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)isEqualToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToTypes:(id)arg1 ;
@end

