/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMBSQLContext, NSArray;

@interface HMBSQLStatement : HMFObject {

	HMBSQLContext* _context;
	sqlite3_stmtRef _statement;
	NSArray* _queryPlans;

}

@property (assign,nonatomic) sqlite3_stmtRef statement;                     //@synthesize statement=_statement - In the implementation block
@property (nonatomic,__weak,readonly) HMBSQLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * queryPlans;                        //@synthesize queryPlans=_queryPlans - In the implementation block
+(sqlite3_stmtRef)sqlStatementForContext:(id)arg1 statement:(id)arg2 ;
+(id)queryPlansForContext:(id)arg1 statement:(id)arg2 ;
+(BOOL)explainStatements;
+(void)setExplainStatements:(BOOL)arg1 ;
-(void)dealloc;
-(void)finalize;
-(HMBSQLContext *)context;
-(sqlite3_stmtRef)statement;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(id)initWithContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 queryPlans:(id)arg3 ;
-(id)initWithContext:(id)arg1 statement:(id)arg2 ;
-(NSArray *)queryPlans;
@end

