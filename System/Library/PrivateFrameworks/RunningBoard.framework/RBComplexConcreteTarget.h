/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBConcreteTarget.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {

	NSString* _description;
	RBProcess* _process;
	RBSProcessIdentity* _identity;
	NSString* _environment;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)identity;
-(id)environment;
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithProcess:(id)arg1 identity:(id)arg2 environment:(id)arg3 ;
@end

