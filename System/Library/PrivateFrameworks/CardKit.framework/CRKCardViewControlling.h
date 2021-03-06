/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardViewControlling <CRKEventResponding,CRKFeedbackDelegate,CRCommandHandling>
@property (nonatomic,retain) id<CRCard> card; 
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource; 
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@required
-(id<CRCard>)card;
-(void)setCard:(id)arg1;
-(double)contentHeightForWidth:(double)arg1;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(id<CRKCardSectionViewSourcing>)cardSectionViewSource;
-(void)setCardSectionViewSource:(id)arg1;
-(void)setCardViewControllerDelegate:(id)arg1;

@end

