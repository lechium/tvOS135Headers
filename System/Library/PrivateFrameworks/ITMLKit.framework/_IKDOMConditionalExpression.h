/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface _IKDOMConditionalExpression : NSObject {

	BOOL _isNegated;
	NSArray* _operations;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
+(id)expressionFromString:(id)arg1 ;
+(id)parseExpressionsFromString:(id)arg1 ;
-(BOOL)passesForDataItem:(id)arg1 ;
-(id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(BOOL)arg3 ;
-(NSSet *)dependentPathStrings;
@end

