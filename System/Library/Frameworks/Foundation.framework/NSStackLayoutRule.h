/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject <NSLayoutRule> {

	NSArray* _stackedRects;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSArray * stackedRects;                   //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
-(long long)orientation;
-(NSArray *)stackedRects;
-(double)spacing;
@end

