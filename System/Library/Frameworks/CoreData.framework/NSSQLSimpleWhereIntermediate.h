/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSMutableArray, NSExpression;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {

	NSMutableArray* _comparisonPredicateScopedItem;
	NSExpression* _effectiveLeftExpression;
	NSExpression* _effectiveRightExpression;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isWhereScoped;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 ;
-(id)_lastScopedItem;
-(BOOL)_isNilExpression:(id)arg1 ;
-(id)_generateSQLType3InContext:(id)arg1 ;
-(id)_sqlTokenForPredicateOperator:(unsigned long long)arg1 inContext:(id)arg2 ;
-(long long)_cfStringOptionsFromPredicateOptions:(unsigned long long)arg1 ;
-(id)_generateSQLForString:(id)arg1 expressionPath:(id)arg2 wildStart:(BOOL)arg3 wildEnd:(BOOL)arg4 allowToMany:(BOOL)arg5 inContext:(id)arg6 ;
-(id)_upperBoundSearchStringForString:(id)arg1 context:(id)arg2 ;
-(id)_generateSQLSubstringWildStart:(BOOL)arg1 wildEnd:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_entityDestinationIfKeyOfSomeSort:(id)arg1 ;
-(id)_prefetchSourceOfUnidirectionalVirtualInverse:(id)arg1 ;
-(id)_generateSQLForConstKeyArray:(id)arg1 targetEntity:(id)arg2 reboundFrom:(id)arg3 inContext:(id)arg4 ;
-(id)_generateSQLForConst:(id)arg1 inManyToMany:(id)arg2 expression:(id)arg3 inContext:(id)arg4 ;
-(id)_generateSQLForConst:(id)arg1 inToMany:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConst:(id)arg1 inAttribute:(id)arg2 expression:(id)arg3 inContext:(id)arg4 ;
-(id)_generateSQLType1InContext:(id)arg1 ;
-(id)_generateSQLType2InContext:(id)arg1 ;
-(id)_generateSQLForMatchingOperator:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLBeginsWithStringInContext:(id)arg1 ;
-(id)_generateSQLEndsWithStringInContext:(id)arg1 ;
-(id)_generateSQLContainmentStringInContext:(id)arg1 ;
-(id)_generateSQLBetweenStringInContext:(id)arg1 ;
-(id)_generateSQLBoundByStringInContext:(id)arg1 ;
-(id)_generateSQLForWildSubStringForGlob:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3 ;
@end

