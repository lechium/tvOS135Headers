/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <TVServices/TVTopShelfContentPrivate.h>
#import <TVServices/TVTopShelfContent.h>

@class NSArray, NSString;

@interface TVTopShelfSectionedContent : NSObject <BSDescriptionProviding, NSSecureCoding, TVTopShelfContentPrivate, TVTopShelfContent> {

	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _hasDisplayableContent; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(CGSize)imageSizeForImageShape:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)sections;
-(id)_deepCopy;
-(void)setSections:(NSArray *)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(unsigned long long)_itemsCount;
-(void)_removeItemsWithIdentifiers:(id)arg1 ;
-(void)_updateItemsWithItemUpdates:(id)arg1 ;
-(BOOL)_hasDisplayableContent;
@end
