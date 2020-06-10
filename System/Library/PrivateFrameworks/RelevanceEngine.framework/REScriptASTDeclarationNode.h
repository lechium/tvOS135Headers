/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTDeclarationNode : REScriptASTNode {

	REScriptToken* _type;
	REScriptToken* _name;
	REScriptASTNode* _value;

}

@property (nonatomic,readonly) REScriptToken * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) REScriptToken * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * value;              //@synthesize value=_value - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)name;
-(REScriptToken *)type;
-(REScriptASTNode *)value;
-(id)dependencies;
-(id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3 ;
@end

