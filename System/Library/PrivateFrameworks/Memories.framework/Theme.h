/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface Theme : NSObject {

	NSString* m_themeID;

}

@property (nonatomic,readonly) NSString * themeID; 
@property (nonatomic,readonly) NSString * trailerID; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)themeIDIsTrailer:(id)arg1 ;
+(id)themeWithID:(id)arg1 ;
+(id)trailerIDFromThemeID:(id)arg1 ;
+(id)themeIDs;
+(id)themeIDFromTrailerID:(id)arg1 ;
-(NSString *)displayName;
-(UIImage *)previewImage;
-(id)posterImage;
-(id)musicName;
-(id)micaFileBaseName;
-(NSString *)themeID;
-(id)micaFileNameForTitleNamed:(id)arg1 ;
-(id)initWithThemeID:(id)arg1 ;
-(NSString *)trailerID;
-(id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2 ;
-(id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2 ;
-(id)displayNameForTransitionName:(id)arg1 ;
@end

