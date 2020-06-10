/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppPlaylist.h>

@class IKAppPlaylistBridge, NSMutableArray, TVPlaylist, NSArray;

@interface _TVPlaylist : NSObject <IKAppPlaylist> {

	NSMutableArray* _mediaItems;
	IKAppPlaylistBridge* _bridge;
	TVPlaylist* _publicObj;

}

@property (nonatomic,readonly) TVPlaylist * publicObj;                    //@synthesize publicObj=_publicObj - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaItems; 
@property (readonly) unsigned long long count; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@property (nonatomic,readonly) IKAppPlaylistBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(IKAppPlaylistBridge *)bridge;
-(NSArray *)mediaItems;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(TVPlaylist *)publicObj;
-(id)initWithIKAppPlaylist:(id)arg1 ;
@end
