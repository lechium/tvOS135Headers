/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _keyAsset;
	NSString* _containerIdentifier;
	long long _position;

}

@property (nonatomic,copy) NSString * containerIdentifier;                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long position;                           //@synthesize position=_position - In the implementation block
@property (assign,getter=isKeyAsset,nonatomic) BOOL keyAsset;              //@synthesize keyAsset=_keyAsset - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1 ;
-(id)proposedIdentifierForItemIdentifier:(id)arg1 ;
-(BOOL)isKeyAsset;
-(void)setKeyAsset:(BOOL)arg1 ;
@end

