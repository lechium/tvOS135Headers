/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, NSString, REHistoricSectionDescriptor, NSArray, NSSet;

@interface RESectionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSOrderedSet* _rules;
	NSString* _name;
	REHistoricSectionDescriptor* _historicSectionDescriptor;
	long long _maxElementCount;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REHistoricSectionDescriptor * historicSectionDescriptor;              //@synthesize historicSectionDescriptor=_historicSectionDescriptor - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                            //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
+(id)defaultSectionDescriptorForIdentifier:(id)arg1 ;
+(id)defaultUpNextSectionDescriptorForIdentifier:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)rules;
-(void)setRules:(NSSet *)arg1 ;
-(void)setMaxElementCount:(long long)arg1 ;
-(void)setOrderedRules:(NSArray *)arg1 ;
-(NSArray *)orderedRules;
-(void)setHistoricSectionDescriptor:(REHistoricSectionDescriptor *)arg1 ;
-(REHistoricSectionDescriptor *)historicSectionDescriptor;
-(long long)maxElementCount;
@end

