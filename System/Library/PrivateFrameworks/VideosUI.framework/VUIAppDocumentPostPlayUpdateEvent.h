/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface VUIAppDocumentPostPlayUpdateEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSDictionary* _postPlayUpdateData;

}

@property (nonatomic,retain) NSDictionary * postPlayUpdateData;              //@synthesize postPlayUpdateData=_postPlayUpdateData - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSDictionary *)postPlayUpdateData;
-(id)initWithPostPlayUpdateData:(id)arg1 ;
-(void)setPostPlayUpdateData:(NSDictionary *)arg1 ;
@end
