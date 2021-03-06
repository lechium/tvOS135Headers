/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {

	AXMPipelineContextInput* _previousInput;
	AXMPipelineContextInput* _currentInput;
	CGPoint _transpositionHistoryCircularBuffer[10];
	unsigned long long _transpositionHistoryLastRecordedIndex;
	BOOL _fillingHistoryBuffer;
	long long _registrationState;

}

@property (nonatomic,readonly) long long registrationState; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(long long)registrationState;
-(void)evaluate:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
-(void)_resetTranspositionHistory;
-(id)_translationalImageRegistrationRequestForInput:(id)arg1 ;
-(void)_recordTransposition:(CGPoint)arg1 ;
-(void)_resetImageRegistration;
@end

