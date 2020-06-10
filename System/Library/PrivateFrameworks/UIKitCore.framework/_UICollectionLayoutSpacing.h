/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@interface _UICollectionLayoutSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	double _spacing;
	BOOL _isFlexible;

}

@property (nonatomic,readonly) double spacing; 
@property (nonatomic,readonly) BOOL isFlexibleSpacing; 
@property (nonatomic,readonly) BOOL isFixedSpacing; 
+(id)fixedSpacing:(double)arg1 ;
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)spacing;
-(BOOL)isFlexibleSpacing;
-(BOOL)isFixedSpacing;
-(id)_apiRepresentation;
-(id)initWithSpacing:(double)arg1 flexible:(BOOL)arg2 ;
@end
