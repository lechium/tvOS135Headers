/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DKComponentPredicate : NSObject {

	BOOL _exactMatch;
	NSString* _type;
	NSString* _identifier;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                    //@synthesize exactMatch=_exactMatch - In the implementation block
+(id)componentPredicateWithDomain:(id)arg1 exactMatch:(BOOL)arg2 ;
+(id)componentPredicateWithType:(id)arg1 identifier:(id)arg2 ;
+(id)componentPredicateMatchingComponentIdentity:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(NSString *)type;
-(NSString *)identifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)matchesComponentIdentity:(id)arg1 ;
-(id)initWithDomain:(id)arg1 exactMatch:(BOOL)arg2 ;
-(BOOL)exactMatch;
-(BOOL)isEqualToComponentPredicate:(id)arg1 ;
@end

