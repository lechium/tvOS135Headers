/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGGeneratedLayoutDelegate.h>

@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate> {

	NSArray* _inputItems;

}

@property (nonatomic,retain) NSArray * inputItems;                  //@synthesize inputItems=_inputItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mockPaddingValues;
-(NSArray *)inputItems;
-(id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned)arg2 ;
-(CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned)arg2 withAspectRatio:(double)arg3 ;
-(id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned)arg2 ;
-(void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setInputItems:(NSArray *)arg1 ;
@end

