/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardModel/HBRawRootItem.h>

@class NSString, NSArray;

@interface HBRawFolder : HBRawRootItem {

	NSString* _name;
	NSArray* _items;
	NSString* _folderIdentifier;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * folderIdentifier;                //@synthesize folderIdentifier=_folderIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allApplications; 
@property (nonatomic,readonly) NSArray * allFolders; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)allApplications;
-(NSString *)folderIdentifier;
-(void)setFolderIdentifier:(NSString *)arg1 ;
-(NSArray *)allFolders;
-(void)_removeDuplicateApplicationsWithVisitedBundleIdentifiers:(id)arg1 ;
-(void)enumerateRecursiveApplicationsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeDuplicateApplications;
@end

