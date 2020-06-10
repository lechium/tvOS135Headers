/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@protocol PXCMMCloudGadgetViewControllerDelegate;
@class NSArray, NSDate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable> {

	unsigned long long _sourceType;
	id<PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
	NSArray* _contentGadgets;

}

@property (nonatomic,copy) NSArray * contentGadgets;                                                        //@synthesize contentGadgets=_contentGadgets - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;              //@synthesize gadgetDelegate=_gadgetDelegate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(id)new;
-(id)init;
-(unsigned long long)sourceType;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(long long)defaultPriority;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
-(void)resetPriorityDate;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(id<PXCMMCloudGadgetViewControllerDelegate>)gadgetDelegate;
-(void)setGadgetDelegate:(id<PXCMMCloudGadgetViewControllerDelegate>)arg1 ;
-(NSArray *)contentGadgets;
-(void)setContentGadgets:(NSArray *)arg1 ;
@end
