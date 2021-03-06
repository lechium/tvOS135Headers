/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode, REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptToken* _member;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptToken * member;                    //@synthesize member=_member - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)member;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(id)initWithMember:(id)arg1 expression:(id)arg2 ;
@end

