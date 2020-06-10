/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class NSString, NSArray, MPCPlayerResponse, NSIndexPath, MPModelGenericObject;

@interface MPCPlayerResponseItem : NSObject <_MPCStateDumpPropertyListTransformable> {

	unsigned long long _seekSupport;
	BOOL _placeholder;
	NSString* _contentItemIdentifier;
	long long _revision;
	NSString* _localizedDurationString;
	NSString* _explicitBadge;
	NSArray* _languageOptionGroups;
	MPCPlayerResponse* _response;
	NSIndexPath* _indexPath;
	MPModelGenericObject* _metadataObject;
	SCD_Struct_MP12 _duration;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                            //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                   //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) long long revision;                                 //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * localizedDurationString;                 //@synthesize localizedDurationString=_localizedDurationString - In the implementation block
@property (nonatomic,readonly) NSString * explicitBadge;                           //@synthesize explicitBadge=_explicitBadge - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionGroups;                     //@synthesize languageOptionGroups=_languageOptionGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlayerResponse *)response;
-(NSIndexPath *)indexPath;
-(id)remove;
-(SCD_Struct_MP12)duration;
-(BOOL)isPlaceholder;
-(NSString *)localizedDurationString;
-(long long)revision;
-(id)_stateDumpObject;
-(NSString *)explicitBadge;
-(id)likeCommand;
-(id)dislikeCommand;
-(id)startPictureInPicture;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(MPModelGenericObject *)metadataObject;
-(NSString *)contentItemIdentifier;
-(id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 ;
-(unsigned long long)_determineSeekSupport;
-(id)_feedbackCommandWithMediaRemoteCommand:(unsigned)arg1 ;
-(id)seekCommand;
-(id)playbackRateCommand;
-(id)wishlistCommand;
-(id)rateCommand;
-(NSArray *)languageOptionGroups;
@end

