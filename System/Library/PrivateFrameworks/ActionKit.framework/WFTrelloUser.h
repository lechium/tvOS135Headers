/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloUser : WFTrelloObject {

	NSString* _email;
	NSString* _username;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * email;                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(NSURL *)URL;
-(NSString *)username;
-(NSString *)email;
@end

