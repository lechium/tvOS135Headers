/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLGroupViewModel.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {

	NSMutableArray* _mutableItems;
	NSString* _identifier;
	NSString* _rowTitle;
	NSString* _groupTitle;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * rowTitle;                     //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy) NSString * groupTitle;                   //@synthesize groupTitle=_groupTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)items;
-(id)initWithIdentifier:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
-(void)setRowTitle:(NSString *)arg1 ;
-(BOOL)shouldCoalesceItems;
-(NSString *)rowTitle;
-(BOOL)restrictionEnabled;
@end

