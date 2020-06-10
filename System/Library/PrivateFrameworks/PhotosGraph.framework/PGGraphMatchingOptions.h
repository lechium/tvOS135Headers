/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray;

@interface PGGraphMatchingOptions : NSObject {

	BOOL _needsKeywords;
	unsigned short _targetEventDomain;
	unsigned long long _relatedType;
	NSSet* _focusedNodes;
	NSArray* _sortDescriptors;

}

@property (assign,nonatomic) unsigned long long relatedType;                //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) unsigned short targetEventDomain;              //@synthesize targetEventDomain=_targetEventDomain - In the implementation block
@property (nonatomic,retain) NSSet * focusedNodes;                          //@synthesize focusedNodes=_focusedNodes - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL needsKeywords;                            //@synthesize needsKeywords=_needsKeywords - In the implementation block
+(unsigned short)defaultTargetEventDomain;
+(id)optionsWithRelatedType:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)relatedType;
-(void)setRelatedType:(unsigned long long)arg1 ;
-(unsigned short)targetEventDomain;
-(void)setTargetEventDomain:(unsigned short)arg1 ;
-(NSSet *)focusedNodes;
-(void)setFocusedNodes:(NSSet *)arg1 ;
-(BOOL)needsKeywords;
-(void)setNeedsKeywords:(BOOL)arg1 ;
@end

