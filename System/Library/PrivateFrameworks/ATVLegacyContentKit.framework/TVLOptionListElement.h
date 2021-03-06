/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, NSArray;

@interface TVLOptionListElement : TVLRootElement {

	BOOL _autoSelectSingleItem;
	NSString* _title;
	NSString* _footnote;
	NSArray* _items;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footnote;                      //@synthesize footnote=_footnote - In the implementation block
@property (assign,nonatomic) BOOL autoSelectSingleItem;              //@synthesize autoSelectSingleItem=_autoSelectSingleItem - In the implementation block
@property (nonatomic,retain) NSArray * items;                        //@synthesize items=_items - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)footnote;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setAutoSelectSingleItem:(BOOL)arg1 ;
-(BOOL)autoSelectSingleItem;
@end

