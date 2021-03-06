/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSResistTerminationGrant : RBSGrant {

	unsigned char _resistance;

}

@property (nonatomic,readonly) unsigned char resistance;              //@synthesize resistance=_resistance - In the implementation block
+(id)grantWithResistance:(unsigned char)arg1 ;
-(void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned char)resistance;
-(id)_initWithResistance:(unsigned char)arg1 ;
@end

