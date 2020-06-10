/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriTVUI/SiriTVUI-Structs.h>
@class NSArray;

@interface SiriTVUICollectionViewLayoutSection : NSObject {

	NSArray* _itemFrames;
	CGRect _sectionHeaderFrame;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) NSArray * itemFrames;                   //@synthesize itemFrames=_itemFrames - In the implementation block
@property (assign,nonatomic) CGRect sectionHeaderFrame;              //@synthesize sectionHeaderFrame=_sectionHeaderFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;              //@synthesize sectionInset=_sectionInset - In the implementation block
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionInset;
-(CGRect)sectionHeaderFrame;
-(void)setSectionHeaderFrame:(CGRect)arg1 ;
-(NSArray *)itemFrames;
-(void)setItemFrames:(NSArray *)arg1 ;
@end

