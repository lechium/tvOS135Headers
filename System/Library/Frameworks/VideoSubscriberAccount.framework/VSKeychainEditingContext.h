/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class VSKeychainStore, NSUndoManager, NSMutableSet, NSSet;

@interface VSKeychainEditingContext : NSObject {

	VSKeychainStore* _keychainStore;
	NSUndoManager* _undoManager;
	NSMutableSet* _items;

}

@property (nonatomic,retain) NSMutableSet * items;                         //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) VSKeychainStore * keychainStore;              //@synthesize keychainStore=_keychainStore - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                  //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,readonly) NSSet * insertedItems; 
@property (nonatomic,readonly) NSSet * updatedItems; 
@property (nonatomic,readonly) NSSet * deletedItems; 
@property (nonatomic,readonly) NSSet * registeredItems; 
-(id)init;
-(NSMutableSet *)items;
-(void)setItems:(NSMutableSet *)arg1 ;
-(void)insertItem:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)save:(id*)arg1 ;
-(NSUndoManager *)undoManager;
-(NSSet *)deletedItems;
-(void)deleteItem:(id)arg1 ;
-(void)fulfillFault:(id)arg1 ;
-(void)_populateQuery:(CFDictionaryRef)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3 ;
-(id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2 ;
-(id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2 ;
-(VSKeychainStore *)keychainStore;
-(void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3 ;
-(id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1 ;
-(NSSet *)updatedItems;
-(NSSet *)insertedItems;
-(void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3 ;
-(NSSet *)registeredItems;
-(void)setKeychainStore:(VSKeychainStore *)arg1 ;
@end

