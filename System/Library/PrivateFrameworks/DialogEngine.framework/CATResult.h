/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface CATResult : NSObject {

	NSString* _catId;
	NSDictionary* _meta;
	NSArray* _speak;
	NSArray* _print;
	NSArray* _dialogId;

}

@property (nonatomic,retain) NSString * catId;                 //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSArray * speak;                  //@synthesize speak=_speak - In the implementation block
@property (nonatomic,retain) NSArray * print;                  //@synthesize print=_print - In the implementation block
@property (nonatomic,retain) NSArray * dialogId;               //@synthesize dialogId=_dialogId - In the implementation block
-(void)setMeta:(NSDictionary *)arg1 ;
-(NSDictionary *)meta;
-(NSArray *)speak;
-(void)setSpeak:(NSArray *)arg1 ;
-(NSArray *)dialogId;
-(void)setDialogId:(NSArray *)arg1 ;
-(NSArray *)print;
-(void)setPrint:(NSArray *)arg1 ;
-(NSString *)catId;
-(void)setCatId:(NSString *)arg1 ;
@end

