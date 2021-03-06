/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TVRemoteItem;
@class NSString, NSArray;

@interface _TVRemoteItemModel : NSObject <NSSecureCoding> {

	BOOL _group;
	id<TVRemoteItem> _item;
	NSString* _uuid;
	NSString* _title;
	long long _icon;
	long long _itemType;
	NSArray* _items;

}

@property (nonatomic,retain) id<TVRemoteItem> item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long icon;                         //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
@property (assign,getter=isGroup,nonatomic) BOOL group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSArray * items;                          //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroup:(BOOL)arg1 ;
-(id<TVRemoteItem>)item;
-(void)setItem:(id<TVRemoteItem>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)icon;
-(void)setIcon:(long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(long long)itemType;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isGroup;
-(id)_stringForItemType:(long long)arg1 ;
@end

