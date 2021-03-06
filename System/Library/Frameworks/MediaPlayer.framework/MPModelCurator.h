/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson

@property (nonatomic,copy) NSString * shortName; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) long long curatorKind; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) id brandLogoArtworkCatalogBlock; 
@property (nonatomic,copy) NSString * handle; 
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__shortName_KEY;
+(id)__curatorKind_KEY;
+(id)__brandLogoArtworkCatalogBlock_KEY;
+(id)__handle_KEY;
-(id)editorialArtworkCatalog;
-(id)brandLogoArtworkCatalog;
@end

