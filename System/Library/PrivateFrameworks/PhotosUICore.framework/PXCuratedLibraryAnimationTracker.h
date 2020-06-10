/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject {

	NSMutableSet* _inFlightAnimations;

}

@property (nonatomic,readonly) NSMutableSet * inFlightAnimations;              //@synthesize inFlightAnimations=_inFlightAnimations - In the implementation block
+(id)sharedTracker;
+(void)scrollAnimationDidBeginWithScrollContext:(SCD_Struct_PX70)arg1 ;
+(void)scrollAnimationDidEndWithScrollContext:(SCD_Struct_PX70)arg1 ;
+(void)_scrollAnimationOccurredWithContext:(SCD_Struct_PX70)arg1 isBegin:(BOOL)arg2 ;
-(id)init;
-(void)zoomLevelTransitionPreparationDidBegin:(id)arg1 ;
-(void)zoomLevelTransitionDidBegin:(id)arg1 ;
-(void)zoomLevelTransitionDidEnd:(id)arg1 ;
-(void)_zoomLevelTransitionOccurred:(id)arg1 isPreparation:(BOOL)arg2 isBegin:(BOOL)arg3 ;
-(void)zoomLevelTransitionsDidEndEarly;
-(NSMutableSet *)inFlightAnimations;
@end

