/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface AMSNotificationSettingsSection : NSObject {

	NSString* _footer;
	NSString* _identifier;
	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
-(id)description;
-(NSString *)identifier;
-(NSArray *)items;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)footer;
-(id)initWithTitle:(id)arg1 footer:(id)arg2 items:(id)arg3 ;
@end

