/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, BSXPCSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
@end

