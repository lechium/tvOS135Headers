/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLPhotoBatchElement : TVLElement {

	NSString* _title;
	NSString* _boldTitle;
	NSString* _dimmedTitle;
	NSArray* _items;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * boldTitle;                //@synthesize boldTitle=_boldTitle - In the implementation block
@property (nonatomic,retain) NSString * dimmedTitle;              //@synthesize dimmedTitle=_dimmedTitle - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBoldTitle:(NSString *)arg1 ;
-(void)setDimmedTitle:(NSString *)arg1 ;
-(NSString *)boldTitle;
-(NSString *)dimmedTitle;
@end

