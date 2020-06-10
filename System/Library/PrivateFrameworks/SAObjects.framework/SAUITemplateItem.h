/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SAUITemplateEdgeInsets;


@protocol SAUITemplateItem <SAAceSerializable>
@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@required
-(SAUITemplateEdgeInsets *)padding;
-(void)setPadding:(id)arg1;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(id)arg1;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(id)arg1;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1;
-(NSArray *)presentationOptions;
-(void)setPresentationOptions:(id)arg1;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1;

@end

