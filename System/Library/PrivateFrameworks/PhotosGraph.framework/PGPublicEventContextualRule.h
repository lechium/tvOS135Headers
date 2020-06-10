/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGContextualRule.h>

@class PGGraph, NSArray, NSString;

@interface PGPublicEventContextualRule : NSObject <PGContextualRule> {

	PGGraph* _graph;
	NSArray* _publicEventNodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGraph:(id)arg1 ;
-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg1 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)highlightNodeMatchingYearHighlight:(id)arg1 withOptions:(id)arg2 ;
@end

