/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHMemory, NSArray;

@interface PXMemoriesInlineProblemReporter : NSObject {

	PHMemory* _memory;
	NSArray* _features;

}

@property (nonatomic,retain) PHMemory * memory;               //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSArray * features;              //@synthesize features=_features - In the implementation block
-(PHMemory *)memory;
-(NSArray *)features;
-(void)setMemory:(PHMemory *)arg1 ;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)_headerText;
-(id)initWithMemory:(id)arg1 features:(id)arg2 ;
-(id)feedbackMailViewController;
-(id)_reportStringForFeatures;
-(id)_infoText;
-(id)_disclaimerText;
@end

