/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVLThunderStandingsSectionDefinition : NSObject {

	NSArray* _columnDefinitions;
	NSArray* _headerDefinitions;
	NSArray* _rows;

}

@property (nonatomic,retain) NSArray * columnDefinitions;              //@synthesize columnDefinitions=_columnDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * headerDefinitions;              //@synthesize headerDefinitions=_headerDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * rows;                           //@synthesize rows=_rows - In the implementation block
-(NSArray *)columnDefinitions;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(void)setColumnDefinitions:(NSArray *)arg1 ;
-(NSArray *)headerDefinitions;
-(void)setHeaderDefinitions:(NSArray *)arg1 ;
@end
