/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface DESRecipe : NSObject <NSCopying> {

	NSDictionary* _recipeUserInfo;
	NSArray* _attachments;
	NSDictionary* _parametersUsed;
	NSString* _recipeId;
	NSString* _recipeType;

}

@property (nonatomic,copy) NSArray * attachments;                                            //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parametersUsed;                           //@synthesize parametersUsed=_parametersUsed - In the implementation block
@property (nonatomic,copy) NSString * recipeId;                                              //@synthesize recipeId=_recipeId - In the implementation block
@property (nonatomic,copy) NSString * recipeType;                                            //@synthesize recipeType=_recipeType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * secureAggregationRecipeInfo; 
@property (nonatomic,copy,readonly) NSDictionary * recipeUserInfo;                           //@synthesize recipeUserInfo=_recipeUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL supportsSecureAggregation; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)recipeId;
-(void)setRecipeId:(NSString *)arg1 ;
-(id)_initWithRecipeUserInfo:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 ;
-(NSString *)recipeType;
-(BOOL)supportsSecureAggregation;
-(NSDictionary *)secureAggregationRecipeInfo;
-(id)_inithWithContentsOfFile:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(id)_initWithRecipeResponse:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)recipeUserInfo;
-(NSDictionary *)parametersUsed;
-(void)setRecipeType:(NSString *)arg1 ;
@end

