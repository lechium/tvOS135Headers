/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode {

	REScriptToken* _prefixOperator;
	REScriptASTNode* _node;

}

@property (nonatomic,readonly) REScriptToken * prefixOperator;              //@synthesize prefixOperator=_prefixOperator - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * node;                      //@synthesize node=_node - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)node;
-(id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2 ;
-(REScriptToken *)prefixOperator;
@end

