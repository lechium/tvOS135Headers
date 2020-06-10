/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface TLITunesTone : NSObject {

	BOOL _purchased;
	BOOL _ringtone;
	BOOL _protectedContent;
	BOOL _privateTone;
	NSString* _identifier;
	NSString* _name;
	NSString* _albumTitle;
	NSString* _artistName;
	NSString* _genreName;
	NSString* _filePath;
	NSNumber* _syncIdentifier;
	unsigned long long _storeItemIdentifier;
	NSString* _storeFrontIdentifier;
	NSString* _artworkFile;
	double _duration;
	NSNumber* _fadeInDurationNumber;
	NSNumber* _fadeOutDurationNumber;

}

@property (nonatomic,readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * albumTitle;                                        //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                        //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSString * genreName;                                         //@synthesize genreName=_genreName - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                                          //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSNumber * syncIdentifier;                                    //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long storeItemIdentifier;                       //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontIdentifier;                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (getter=isPurchased,nonatomic,readonly) BOOL purchased;                            //@synthesize purchased=_purchased - In the implementation block
@property (getter=isRingtone,nonatomic,readonly) BOOL ringtone;                              //@synthesize ringtone=_ringtone - In the implementation block
@property (nonatomic,readonly) NSString * artworkFile;                                       //@synthesize artworkFile=_artworkFile - In the implementation block
@property (nonatomic,readonly) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (getter=isProtectedContent,nonatomic,readonly) BOOL protectedContent;              //@synthesize protectedContent=_protectedContent - In the implementation block
@property (getter=isPrivateTone,nonatomic,readonly) BOOL privateTone;                        //@synthesize privateTone=_privateTone - In the implementation block
@property (nonatomic,readonly) NSNumber * fadeInDurationNumber;                              //@synthesize fadeInDurationNumber=_fadeInDurationNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * fadeOutDurationNumber;                             //@synthesize fadeOutDurationNumber=_fadeOutDurationNumber - In the implementation block
+(id)_identifierForPropertyListRepresentation:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(double)duration;
-(NSString *)filePath;
-(NSString *)artistName;
-(NSString *)genreName;
-(NSString *)storeFrontIdentifier;
-(unsigned long long)storeItemIdentifier;
-(NSNumber *)syncIdentifier;
-(id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2 ;
-(BOOL)isDuplicateOfTone:(id)arg1 ;
-(BOOL)isRingtone;
-(NSString *)albumTitle;
-(id)initWithToneStoreDownload:(id)arg1 ;
-(BOOL)isPurchased;
-(NSString *)artworkFile;
-(BOOL)isProtectedContent;
-(BOOL)isPrivateTone;
-(NSNumber *)fadeInDurationNumber;
-(NSNumber *)fadeOutDurationNumber;
@end

