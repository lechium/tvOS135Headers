/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPersonNode.h>

@interface PGGraphMeNode : PGGraphPersonNode
-(void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2 ;
-(void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_relationshipLabelForRelationship:(unsigned long long)arg1 ;
-(void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2 ;
@end
