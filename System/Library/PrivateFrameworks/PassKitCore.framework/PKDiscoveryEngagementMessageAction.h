/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying> {

	NSString* _titleKey;
	long long _type;
	NSDictionary* _actionInfo;
	NSString* _localizedTitle;

}

@property (nonatomic,retain) NSString * titleKey;                      //@synthesize titleKey=_titleKey - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * actionInfo;                //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(NSDictionary *)actionInfo;
-(void)localizeWithBundle:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
@end

