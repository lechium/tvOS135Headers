/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVTopShelfAction;

@interface TVTopShelfItemUpdate : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	TVTopShelfAction* _playAction;
	TVTopShelfAction* _displayAction;
	TVTopShelfAction* _addToLibraryAction;

}

@property (nonatomic,readonly) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * playAction;                      //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * displayAction;                   //@synthesize displayAction=_displayAction - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * addToLibraryAction;              //@synthesize addToLibraryAction=_addToLibraryAction - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(id)initWithItemIdentifier:(id)arg1 ;
-(TVTopShelfAction *)playAction;
-(void)setPlayAction:(TVTopShelfAction *)arg1 ;
-(TVTopShelfAction *)displayAction;
-(void)setDisplayAction:(TVTopShelfAction *)arg1 ;
-(TVTopShelfAction *)addToLibraryAction;
-(void)setAddToLibraryAction:(TVTopShelfAction *)arg1 ;
@end

