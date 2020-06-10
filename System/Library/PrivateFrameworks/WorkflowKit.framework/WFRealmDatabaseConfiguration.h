/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RLMRealmConfiguration;

@interface WFRealmDatabaseConfiguration : NSObject {

	RLMRealmConfiguration* _realmConfiguration;

}

@property (nonatomic,readonly) RLMRealmConfiguration * realmConfiguration;              //@synthesize realmConfiguration=_realmConfiguration - In the implementation block
+(id)systemShortcutsConfiguration;
+(id)inMemoryConfiguration;
+(id)inMemoryConfigurationWithIdentifier:(id)arg1 ;
-(RLMRealmConfiguration *)realmConfiguration;
@end

