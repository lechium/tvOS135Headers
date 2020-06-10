/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXGadgetTransition.h>

@protocol PXGridPresentation;
@class PXOneUpPresentation, NSString;

@interface PXUIGadgetTransition : NSObject <PXGadgetTransition> {

	PXOneUpPresentation* _oneUpPresentation;
	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,readonly) PXOneUpPresentation * oneUpPresentation;              //@synthesize oneUpPresentation=_oneUpPresentation - In the implementation block
@property (nonatomic,readonly) id<PXGridPresentation> gridPresentation;              //@synthesize gridPresentation=_gridPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXOneUpPresentation *)oneUpPresentation;
-(id<PXGridPresentation>)gridPresentation;
-(id)initWithOneUpPresentation:(id)arg1 gridPresentation:(id)arg2 ;
@end

