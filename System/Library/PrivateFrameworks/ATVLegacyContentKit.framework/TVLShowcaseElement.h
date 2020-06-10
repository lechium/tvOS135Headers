/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, TVLInitialSelectionElement;

@interface TVLShowcaseElement : TVLElement {

	NSArray* _items;
	TVLInitialSelectionElement* _initialSelection;

}

@property (nonatomic,copy) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection;              //@synthesize initialSelection=_initialSelection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(TVLInitialSelectionElement *)initialSelection;
-(void)setInitialSelection:(TVLInitialSelectionElement *)arg1 ;
@end

