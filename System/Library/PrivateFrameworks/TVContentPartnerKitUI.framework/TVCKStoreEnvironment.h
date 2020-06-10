/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVCKStoreEnvironment : NSObject {

	NSString* _environment;
	NSString* _build;
	NSString* _branch;
	NSString* _stringData;

}

@property (retain) NSString * environment;              //@synthesize environment=_environment - In the implementation block
@property (retain) NSString * build;                    //@synthesize build=_build - In the implementation block
@property (retain) NSString * branch;                   //@synthesize branch=_branch - In the implementation block
@property (retain) NSString * stringData;               //@synthesize stringData=_stringData - In the implementation block
@property (readonly) BOOL isProduction; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)build;
-(NSString *)stringData;
-(void)setStringData:(NSString *)arg1 ;
-(void)setBuild:(NSString *)arg1 ;
-(void)setBranch:(NSString *)arg1 ;
-(id)initWithEnvironmentDictionary:(id)arg1 ;
-(NSString *)branch;
-(id)initWithStorePage:(id)arg1 ;
-(BOOL)isProduction;
@end

