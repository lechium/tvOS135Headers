/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary, NSArray;

@interface EDAMBusinessQueryResult : FATObject {

	NSNumber* _totalNotebooks;
	NSDictionary* _totalNotesByNotebook;
	NSArray* _experts;
	NSArray* _matchingNotebooks;

}

@property (nonatomic,retain) NSNumber * totalNotebooks;                        //@synthesize totalNotebooks=_totalNotebooks - In the implementation block
@property (nonatomic,retain) NSDictionary * totalNotesByNotebook;              //@synthesize totalNotesByNotebook=_totalNotesByNotebook - In the implementation block
@property (nonatomic,retain) NSArray * experts;                                //@synthesize experts=_experts - In the implementation block
@property (nonatomic,retain) NSArray * matchingNotebooks;                      //@synthesize matchingNotebooks=_matchingNotebooks - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setExperts:(NSArray *)arg1 ;
-(NSArray *)experts;
-(NSNumber *)totalNotebooks;
-(void)setTotalNotebooks:(NSNumber *)arg1 ;
-(NSDictionary *)totalNotesByNotebook;
-(void)setTotalNotesByNotebook:(NSDictionary *)arg1 ;
-(NSArray *)matchingNotebooks;
-(void)setMatchingNotebooks:(NSArray *)arg1 ;
@end
