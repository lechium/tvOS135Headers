/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface AMSDataMigratorOptions : NSObject {

	NSString* _currentBuildVersion;
	NSString* _previousBuildVersion;
	unsigned long long _scenario;

}

@property (nonatomic,copy) NSString * currentBuildVersion;               //@synthesize currentBuildVersion=_currentBuildVersion - In the implementation block
@property (nonatomic,readonly) NSArray * optionsArray; 
@property (nonatomic,copy) NSString * previousBuildVersion;              //@synthesize previousBuildVersion=_previousBuildVersion - In the implementation block
@property (assign,nonatomic) unsigned long long scenario;                //@synthesize scenario=_scenario - In the implementation block
+(id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)scenario;
-(NSString *)previousBuildVersion;
-(NSString *)currentBuildVersion;
-(id)initWithOptionsArray:(id)arg1 ;
-(NSArray *)optionsArray;
-(void)setCurrentBuildVersion:(NSString *)arg1 ;
-(void)setPreviousBuildVersion:(NSString *)arg1 ;
-(void)setScenario:(unsigned long long)arg1 ;
@end

