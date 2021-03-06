/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TILRUDictionaryNode : NSObject {

	id _key;
	id _object;
	TILRUDictionaryNode* next;
	TILRUDictionaryNode* prev;

}

@property (nonatomic,readonly) id key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
-(id)key;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
@end

