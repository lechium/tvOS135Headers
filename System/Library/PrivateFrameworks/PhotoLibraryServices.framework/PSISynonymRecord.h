/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;

}

@property (nonatomic,copy) NSString * synonym;              //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                //@synthesize category=_category - In the implementation block
-(short)category;
-(void)setCategory:(short)arg1 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 ;
@end

