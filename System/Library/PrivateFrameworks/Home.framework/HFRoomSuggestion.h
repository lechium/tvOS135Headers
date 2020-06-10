/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface HFRoomSuggestion : NSObject {

	NSString* _name;
	NSSet* _aliases;
	long long _priority;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * aliases;              //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) long long priority;                //@synthesize priority=_priority - In the implementation block
+(/*^block*/id)priorityComparator;
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3 ;
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 ;
-(NSString *)name;
-(long long)priority;
-(NSSet *)aliases;
@end
