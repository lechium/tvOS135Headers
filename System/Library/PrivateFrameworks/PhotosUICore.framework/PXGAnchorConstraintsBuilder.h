/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnchorConstraints.h>

@class NSMutableArray, NSArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints> {

	NSMutableArray* _constraints;

}

@property (nonatomic,copy,readonly) NSArray * constraints; 
-(id)init;
-(NSArray *)constraints;
-(void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3 ;
-(void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4 ;
-(void)keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned)arg4 offset:(double)arg5 ;
-(void)keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned)arg4 offset:(double)arg5 ;
-(void)_keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned)arg5 offset:(double)arg6 ;
@end

