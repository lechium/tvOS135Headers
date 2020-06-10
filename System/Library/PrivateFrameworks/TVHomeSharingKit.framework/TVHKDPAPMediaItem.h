/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaItem.h>

@class NSString, TVHKMediaEntityType, NSArray;

@interface TVHKDPAPMediaItem : TVHKMediaItem {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	NSArray* _faces;

}
-(id)type;
-(id)faces;
-(id)dimensions;
-(id)imageIdentifier;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
@end

