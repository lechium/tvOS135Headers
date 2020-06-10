/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchResultSection.h>
@class NSString;


@protocol GEOSearchResultSection
@property (assign,nonatomic) long long cellType; 
@property (nonatomic,copy) NSString * headerDisplayName; 
@property (nonatomic,copy) NSString * subHeaderDisplayName; 
@required
-(long long)cellType;
-(void)setCellType:(long long)arg1;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(id)arg1;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(id)arg1;

@end


@class NSString;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection> {

	long long _cellType;
	NSString* _headerDisplayName;
	NSString* _subHeaderDisplayName;

}

@property (assign,nonatomic) long long cellType;                         //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,copy) NSString * headerDisplayName;                 //@synthesize headerDisplayName=_headerDisplayName - In the implementation block
@property (nonatomic,copy) NSString * subHeaderDisplayName;              //@synthesize subHeaderDisplayName=_subHeaderDisplayName - In the implementation block
-(id)init;
-(id)initWithSearchResultSection:(id)arg1 ;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(NSString *)arg1 ;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(NSString *)arg1 ;
@end

