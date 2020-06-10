/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWStillImageProcessorInput.h>

@class BWDeferredProcessorController, BWDeferredProcessingContainer, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput {

	BWDeferredProcessorController* _processorController;
	BWDeferredProcessingContainer* _container;
	NSString* _photoIdentifier;

}

@property (assign,nonatomic) BWDeferredProcessorController * processorController;              //@synthesize processorController=_processorController - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * photoIdentifier;                                     //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
-(void)dealloc;
-(BWDeferredProcessingContainer *)container;
-(NSString *)photoIdentifier;
-(void)setContainer:(id)arg1 photoIdentifier:(id)arg2 ;
-(BWDeferredProcessorController *)processorController;
-(void)setProcessorController:(BWDeferredProcessorController *)arg1 ;
@end

