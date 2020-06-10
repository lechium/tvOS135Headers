/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _shouldBadge;
	long long _type;
	NSURL* _layoutBundleURL;
	NSArray* _supportedLocalizations;
	long long _priority;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * layoutBundleURL;                         //@synthesize layoutBundleURL=_layoutBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedLocalizations;              //@synthesize supportedLocalizations=_supportedLocalizations - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                              //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(NSURL *)layoutBundleURL;
-(NSArray *)supportedLocalizations;
-(void)updateWithDiscoveryItem:(id)arg1 ;
-(void)setLayoutBundleURL:(NSURL *)arg1 ;
-(void)setSupportedLocalizations:(NSArray *)arg1 ;
@end
