/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSSetExpression : NSExpression {

	NSExpression* _left;
	NSExpression* _right;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)leftExpression;
-(id)rightExpression;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)allowEvaluation;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
@end
