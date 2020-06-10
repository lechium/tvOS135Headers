/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIDocumentPreFetchedData.h>

@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData {

	BOOL _updateEvent;
	BOOL _canAutoPlay;
	NSString* _host;
	NSString* _productID;
	NSString* _showID;
	NSArray* _excludedCanonicals;

}

@property (nonatomic,copy) NSString * host;                           //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * productID;                      //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy) NSString * showID;                         //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy) NSArray * excludedCanonicals;              //@synthesize excludedCanonicals=_excludedCanonicals - In the implementation block
@property (assign,nonatomic) BOOL updateEvent;                        //@synthesize updateEvent=_updateEvent - In the implementation block
@property (assign,nonatomic) BOOL canAutoPlay;                        //@synthesize canAutoPlay=_canAutoPlay - In the implementation block
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)productID;
-(void)setProductID:(NSString *)arg1 ;
-(id)jsonData;
-(NSString *)showID;
-(BOOL)updateEvent;
-(BOOL)canAutoPlay;
-(NSArray *)excludedCanonicals;
-(void)setShowID:(NSString *)arg1 ;
-(void)setExcludedCanonicals:(NSArray *)arg1 ;
-(void)setUpdateEvent:(BOOL)arg1 ;
-(void)setCanAutoPlay:(BOOL)arg1 ;
@end

