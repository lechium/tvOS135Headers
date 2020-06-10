/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DKPreferences : NSObject {

	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(id)preferencesForDomain:(id)arg1 ;
-(NSString *)domain;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2 ;
@end

