/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUILibraryDataSource.h>

@protocol VUIShelvesDataSourceDelegate;
@class NSSet, NSDictionary;

@interface VUILibraryShelvesDataSource : VUILibraryDataSource {

	NSSet* _shelfTypes;
	NSDictionary* _dataSourcesByShelfType;
	id<VUIShelvesDataSourceDelegate> _shelvesDelegate;

}

@property (nonatomic,retain) NSSet * shelfTypes;                                                   //@synthesize shelfTypes=_shelfTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSourcesByShelfType;                                //@synthesize dataSourcesByShelfType=_dataSourcesByShelfType - In the implementation block
@property (assign,nonatomic,__weak) id<VUIShelvesDataSourceDelegate> shelvesDelegate;              //@synthesize shelvesDelegate=_shelvesDelegate - In the implementation block
-(id)initWithValidShelfTypes:(id)arg1 ;
-(void)setDataSourcesByShelfType:(NSDictionary *)arg1 ;
-(NSSet *)shelfTypes;
-(id<VUIShelvesDataSourceDelegate>)shelvesDelegate;
-(NSDictionary *)dataSourcesByShelfType;
-(void)setShelfTypes:(NSSet *)arg1 ;
-(void)setShelvesDelegate:(id<VUIShelvesDataSourceDelegate>)arg1 ;
@end
