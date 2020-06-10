/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSNumber, NSDate, NSURL;

@interface WFTrelloCard : WFTrelloObject {

	NSString* _itemDescription;
	NSNumber* _creationPosition;
	NSDate* _dueDate;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * itemDescription;               //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * creationPosition;              //@synthesize creationPosition=_creationPosition - In the implementation block
@property (nonatomic,readonly) NSDate * dueDate;                         //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)dueDateJSONTransformer;
-(NSURL *)URL;
-(NSDate *)dueDate;
-(NSString *)itemDescription;
-(NSNumber *)creationPosition;
@end

