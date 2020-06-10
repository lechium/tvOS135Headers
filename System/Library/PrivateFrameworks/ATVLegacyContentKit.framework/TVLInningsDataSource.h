/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLColumnRowViewDataSource.h>

@interface TVLInningsDataSource : TVLColumnRowViewDataSource {

	long long _pageSize;
	long long _currentPage;

}

@property (assign,nonatomic) long long pageSize;                     //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (assign,nonatomic) long long currentPage;                  //@synthesize currentPage=_currentPage - In the implementation block
-(long long)pageSize;
-(void)setPageSize:(long long)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(long long)numberOfPages;
-(id)initWithTableElement:(id)arg1 ;
-(long long)numberOfColumnsInColumnRowView:(id)arg1 ;
-(id)columnRowView:(id)arg1 headerForColumn:(long long)arg2 ;
-(id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3 ;
-(void)advanceToNextPage;
-(long long)convertColumn:(long long)arg1 ;
@end

