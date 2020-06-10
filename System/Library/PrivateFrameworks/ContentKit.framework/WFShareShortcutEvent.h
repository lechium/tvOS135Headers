/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShareShortcutEvent : WFEvent {

	int _source;
	unsigned _actionCount;
	NSString* _key;
	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _sharingDestinationBundleIdentifier;

}

@property (nonatomic,copy) NSString * key;                                             //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int source;                                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                                     //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSString * addToSiriBundleIdentifier;                       //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                               //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sharingDestinationBundleIdentifier;              //@synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)actionCount;
-(void)setActionCount:(unsigned)arg1 ;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)sharingDestinationBundleIdentifier;
-(void)setSharingDestinationBundleIdentifier:(NSString *)arg1 ;
@end

