/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload {

	NSString* _customMessage;

}

@property (nonatomic,copy,readonly) NSString * customMessage;              //@synthesize customMessage=_customMessage - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)customMessage;
@end

