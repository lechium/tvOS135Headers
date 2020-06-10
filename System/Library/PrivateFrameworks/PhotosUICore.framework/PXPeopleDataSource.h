/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPeopleDataSourceDelegate, OS_dispatch_queue;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSPredicate, NSArray, NSObject, PHFetchResult;

@interface PXPeopleDataSource : NSObject {

	BOOL _disclosed;
	BOOL _useAsynchronousLoad;
	NSString* _name;
	unsigned long long _maximumNumberOfMembers;
	id<PXPeopleDataSourceDelegate> _delegate;
	NSString* _localizedDisclosedTitle;
	NSString* _localizedUndisclosedTitle;
	NSPredicate* _filterPredicate;
	/*^block*/id _sortComparator;
	NSArray* _members;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	PHFetchResult* _objects;
	/*^block*/id _reloadBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadQueue;                    //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,readonly) BOOL useAsynchronousLoad;                                  //@synthesize useAsynchronousLoad=_useAsynchronousLoad - In the implementation block
@property (nonatomic,retain) PHFetchResult * objects;                                     //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy) id reloadBlock;                                                //@synthesize reloadBlock=_reloadBlock - In the implementation block
@property (nonatomic,copy) NSArray * members;                                             //@synthesize members=_members - In the implementation block
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMembers; 
@property (assign,nonatomic) unsigned long long maximumNumberOfMembers;                   //@synthesize maximumNumberOfMembers=_maximumNumberOfMembers - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * localizedDisclosedTitle;                                      //@synthesize localizedDisclosedTitle=_localizedDisclosedTitle - In the implementation block
@property (copy) NSString * localizedUndisclosedTitle;                                    //@synthesize localizedUndisclosedTitle=_localizedUndisclosedTitle - In the implementation block
@property (getter=isDisclosed) BOOL disclosed;                                            //@synthesize disclosed=_disclosed - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                                 //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy) id sortComparator;                                             //@synthesize sortComparator=_sortComparator - In the implementation block
@property (nonatomic,readonly) NSArray * persons; 
-(NSString *)name;
-(void)dealloc;
-(id<PXPeopleDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleDataSourceDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)members;
-(id)localizedTitle;
-(PHFetchResult *)objects;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(NSArray *)persons;
-(void)setObjects:(PHFetchResult *)arg1 ;
-(void)setMembers:(NSArray *)arg1 ;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
-(NSPredicate *)filterPredicate;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 asynchronousLoad:(BOOL)arg3 callbackDelegate:(id)arg4 ;
-(id)initWithName:(id)arg1 objects:(id)arg2 ;
-(unsigned long long)numberOfMembers;
-(id)memberAtIndex:(unsigned long long)arg1 ;
-(id)personAtIndex:(unsigned long long)arg1 ;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1 ;
-(/*^block*/id)defaultComparator;
-(void)setReloadBlock:(id)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)_setObjectsWithoutUpdate:(id)arg1 ;
-(void)loadObjectsAndUpdateMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateMembers;
-(id)_itemsArrayFromObjects:(id)arg1 ;
-(void)_asyncLoadImageForItem:(id)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(unsigned long long)maximumNumberOfMembers;
-(void)setMaximumNumberOfMembers:(unsigned long long)arg1 ;
-(NSString *)localizedDisclosedTitle;
-(void)setLocalizedDisclosedTitle:(NSString *)arg1 ;
-(NSString *)localizedUndisclosedTitle;
-(void)setLocalizedUndisclosedTitle:(NSString *)arg1 ;
-(BOOL)isDisclosed;
-(void)setDisclosed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(void)setReloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)useAsynchronousLoad;
-(id)reloadBlock;
@end

