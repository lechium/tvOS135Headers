/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject {

	BOOL _allowAbstractTarget;
	BOOL _unitTesting;
	RBProcess* _process;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSAssertionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) id holdToken;                                       //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                   //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowAbstractTarget;                           //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;               //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptor:(id)arg2 ;
-(RBSAssertionDescriptor *)descriptor;
-(RBProcess *)process;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)unitTesting;
-(unsigned long long)acquisitionPolicy;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(id)holdToken;
-(BOOL)allowAbstractTarget;
-(void)setHoldToken:(id)arg1 ;
@end

