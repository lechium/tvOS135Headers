/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument {

	BOOL _filterLocations;
	unsigned long long _type;
	NSSet* _usedLocationNodes;
	unsigned long long _lineBreakBehavior;

}

@property (readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) BOOL filterLocations;                            //@synthesize filterLocations=_filterLocations - In the implementation block
@property (assign) unsigned long long lineBreakBehavior;              //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (retain) NSSet * usedLocationNodes;                         //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
+(id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
-(id)_generateBusinessItemTitleWithMomentNodes:(id)arg1 ;
-(id)_generateLocationTitleWithOptions:(id)arg1 ;
-(BOOL)filterLocations;
-(NSSet *)usedLocationNodes;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
@end

