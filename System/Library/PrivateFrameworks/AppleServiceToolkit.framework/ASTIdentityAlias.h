/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityAliasWithSerialNumber:(id)arg1 ;
+(id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1 ;
+(id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithMainLogicBoardSerialNumber:(id)arg1 ;
-(id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
@end

