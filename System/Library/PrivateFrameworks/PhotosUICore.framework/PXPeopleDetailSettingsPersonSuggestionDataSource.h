/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleDetailSettingsDataSource.h>

@class NSString, NSArray;

@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource> {

	NSString* _title;
	NSArray* _personSuggestions;

}

@property (nonatomic,retain) NSArray * personSuggestions;                     //@synthesize personSuggestions=_personSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasMoreDetails; 
@property (nonatomic,readonly) long long action; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)action;
-(unsigned long long)numberOfItems;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)personNameAtIndex:(long long)arg1 ;
-(unsigned long long)faceCount:(long long)arg1 ;
-(long long)verifyTypeAtIndex:(long long)arg1 ;
-(id)modelObjectForIndex:(long long)arg1 ;
-(BOOL)hasMoreDetails;
-(id)initWithTitle:(id)arg1 personSuggestions:(id)arg2 ;
-(NSArray *)personSuggestions;
-(void)setPersonSuggestions:(NSArray *)arg1 ;
@end
