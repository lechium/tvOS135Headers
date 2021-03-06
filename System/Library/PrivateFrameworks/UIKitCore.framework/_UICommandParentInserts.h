/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface _UICommandParentInserts : NSObject {

	NSMutableDictionary* _childInserts;
	NSMutableArray* _fallbackBeforeElements;
	NSMutableArray* _fallbackAfterElements;
	NSArray* _atStartElements;
	NSArray* _atEndElements;

}

@property (nonatomic,readonly) NSArray * atStartElements;                     //@synthesize atStartElements=_atStartElements - In the implementation block
@property (nonatomic,readonly) NSArray * atEndElements;                       //@synthesize atEndElements=_atEndElements - In the implementation block
@property (nonatomic,readonly) NSDictionary * childInserts;                   //@synthesize childInserts=_childInserts - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackBeforeElements;              //@synthesize fallbackBeforeElements=_fallbackBeforeElements - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackAfterElements;               //@synthesize fallbackAfterElements=_fallbackAfterElements - In the implementation block
-(void)_setAtStartElements:(id)arg1 atEndElements:(id)arg2 ;
-(void)_setBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 ;
-(void)_addFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 ;
-(NSArray *)atStartElements;
-(NSArray *)atEndElements;
-(NSDictionary *)childInserts;
-(NSArray *)fallbackBeforeElements;
-(NSArray *)fallbackAfterElements;
@end

