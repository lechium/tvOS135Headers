/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property (readonly) NSSet * annotationsToAddImmediately; 
@property (readonly) NSSet * annotationsToRemoveImmediately; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasStarted; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasEnded; 
@property (readonly) NSSet * annotationsToRedraw; 
@property (readonly) NSSet * annotationsWithUpdatedIndex; 
@property (readonly) NSSet * overlaysToAddImmediately; 
@property (readonly) NSSet * overlaysToRemoveImmediately; 
@required
-(NSSet *)annotationsToAddImmediately;
-(NSSet *)annotationsToRemoveImmediately;
-(NSSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSSet *)annotationsToRedraw;
-(NSSet *)annotationsWithUpdatedIndex;
-(NSSet *)overlaysToAddImmediately;
-(NSSet *)overlaysToRemoveImmediately;

@end
