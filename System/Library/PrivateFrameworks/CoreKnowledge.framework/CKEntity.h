/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKEntity : NSObject {

	 identifier;
	 store;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)valuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)linksTo:(id)arg1 matchType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)linksTo:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
@end

