/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface MLParameterContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _currentParameterValues;
	NSArray* _parameterKeys;
	NSDictionary* _parameterDescriptions;

}

@property (nonatomic,retain) NSMutableDictionary * currentParameterValues;              //@synthesize currentParameterValues=_currentParameterValues - In the implementation block
@property (nonatomic,retain) NSArray * parameterKeys;                                   //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptions;                      //@synthesize parameterDescriptions=_parameterDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)parameterContainerFor:(id)arg1 descriptions:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateParameterValue:(id)arg1 givenConstraint:(id)arg2 ;
-(NSMutableDictionary *)currentParameterValues;
-(void)setCurrentParameterValues:(NSMutableDictionary *)arg1 ;
-(NSArray *)parameterKeys;
-(void)setParameterKeys:(NSArray *)arg1 ;
-(NSDictionary *)parameterDescriptions;
-(void)setParameterDescriptions:(NSDictionary *)arg1 ;
@end

