/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_sec_experiment.h>

@class SecExperiment, NSString;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {

	SecExperiment* innerExperiment;
	unsigned long long numRuns;
	unsigned long long successRuns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)name;
-(id)initWithName:(const char*)arg1 ;
-(const char*)identifier;
-(id)initWithInnerExperiment:(id)arg1 ;
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
@end

