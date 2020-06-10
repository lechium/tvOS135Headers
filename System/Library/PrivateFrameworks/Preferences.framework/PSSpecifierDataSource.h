/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierDataSource.h>

@protocol PSSpecifierDataSource <NSObject>
@required
+(id)sharedInstance;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;

@end


@class NSMutableSet, NSMutableArray, NSString;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource> {

	NSMutableSet* _observerRefs;
	BOOL _specifiersLoaded;
	NSMutableArray* _specifiers;

}

@property (nonatomic,readonly) NSMutableArray * specifiers;              //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)observers;
-(NSMutableArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)loadSpecifiers;
-(id)observersOfClass:(Class)arg1 ;
-(void)enumerateObserversOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)areSpecifiersLoaded;
-(void)_clearAllSpecifiers;
-(void)_invalidateSpecifiersForObservers;
-(void)performUpdates:(id)arg1 ;
-(void)performUpdatesAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
