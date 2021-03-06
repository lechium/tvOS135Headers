/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface _MPAbstractNetworkArtworkDataSourceVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {

	NSString* _artworkIdentifier;

}

@property (nonatomic,copy) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
@end

