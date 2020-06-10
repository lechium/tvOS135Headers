/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class SSSoftwareLibraryItem, NSDictionary, NSHashTable, NSArray, NSURL, UIImage, NSString, NSNumber;

@interface PKLinkedApplication : NSObject {

	SSSoftwareLibraryItem* _foundLibraryItem;
	NSDictionary* _foundStoreItem;
	unsigned long long _loadingToken;
	BOOL _loaded;
	BOOL _loading;
	NSHashTable* _observers;
	BOOL _useSmallIcon;
	NSArray* _storeIDs;
	NSURL* _defaultLaunchURL;
	UIImage* _iconImage;

}

@property (nonatomic,copy) NSArray * storeIDs;                                 //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,copy) NSURL * defaultLaunchURL;                           //@synthesize defaultLaunchURL=_defaultLaunchURL - In the implementation block
@property (assign,nonatomic) BOOL useSmallIcon;                                //@synthesize useSmallIcon=_useSmallIcon - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) CGSize expectedIconSize; 
@property (nonatomic,readonly) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSNumber * averageRating; 
@property (nonatomic,readonly) NSString * price; 
+(id)_openOptionsWithURL:(id)arg1 ;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(long long)state;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isInstalled;
-(NSString *)price;
-(NSString *)publisher;
-(UIImage *)iconImage;
-(NSNumber *)averageRating;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)setUseSmallIcon:(BOOL)arg1 ;
-(id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2 ;
-(void)installedApplicationsDidChangeNotification:(id)arg1 ;
-(void)_notifyObserversOfStateChange;
-(void)_updateApplicationStateWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadApplicationState;
-(int)_iconVariantForScale:(double)arg1 ;
-(void)_performStoreLookupWithCompletion:(/*^block*/id)arg1 ;
-(id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2 ;
-(int)_iconOptionsForItem:(id)arg1 ;
-(id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2 requireStrictMatch:(BOOL)arg3 ;
-(id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(BOOL)arg3 ;
-(BOOL)_itemArtNeedsShine:(id)arg1 ;
-(void)_unloadApplicationState;
-(BOOL)_useLibraryItem;
-(void)reloadApplicationStateIfNecessary;
-(void)openApplication:(id)arg1 ;
-(CGSize)expectedIconSize;
-(NSURL *)defaultLaunchURL;
-(void)setDefaultLaunchURL:(NSURL *)arg1 ;
-(BOOL)useSmallIcon;
@end

