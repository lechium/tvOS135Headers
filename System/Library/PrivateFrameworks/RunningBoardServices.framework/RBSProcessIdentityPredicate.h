/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class RBSProcessIdentity;

@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl {

	RBSProcessIdentity* _identity;

}

@property (nonatomic,readonly) RBSProcessIdentity * identity;              //@synthesize identity=_identity - In the implementation block
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(RBSProcessIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
@end

